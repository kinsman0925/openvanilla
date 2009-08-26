//
//  MainController.h
//  OVPreference

#import <Cocoa/Cocoa.h>
#import "LVDOInterface.h"
#import "LVConfig.h"

@interface MainController : NSWindowController 
{
	NSMutableDictionary *_settingDictionary;
	NSMutableArray *_controllersArray;
	
	IBOutlet NSView *_loaderSettingView;
	IBOutlet NSView *_moduleSettingView;
	IBOutlet NSView *_moduleContentView;
	IBOutlet NSTableView *_moduleListTableView;
	
	IBOutlet NSTextField *_titleLabel;
	
	id<LVDOInterface> _loader;
}

- (NSString *)plistFilePath;
- (void)loadPlist;
- (void)updateSettingWithIdentifier:(NSString *)identifier settings:(NSDictionary *)settings;
- (void)writePlist;
- (void)initModules;

@end
