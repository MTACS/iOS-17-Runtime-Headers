
@protocol SBSApplicationUserQuitMonitorDelegate <NSObject>

@required

- (void)quitMonitor:(SBSApplicationUserQuitMonitor *)arg1 userClosedLastSceneOfApplicationWithBundleID:(NSString *)arg2;

@end
