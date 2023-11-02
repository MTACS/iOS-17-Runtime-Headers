
@protocol SBSApplicationUserQuitMonitorServerToClientInterface <NSObject>

@required

- (oneway void)userClosedLastSceneOfApplicationWithBundleID:(NSString *)arg1;

@end
