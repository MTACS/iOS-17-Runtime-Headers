
@protocol WBStateProvider <NSObject, WBTabProvider>

@required

- (WBBrowserState *)browserState;
- (bool)hasCompletedMigration;
- (bool)isPersistent;
- (WBBrowserState *)lastSessionBrowserState;
- (NSArray *)profiles;
- (WBWindowState *)windowStateWithUUID:(NSString *)arg1;
- (NSArray *)windowStates;
- (WBWindow *)windowWithUUID:(NSString *)arg1;
- (NSArray *)windows;
- (int)windowsFolderSpecialID;

@end
