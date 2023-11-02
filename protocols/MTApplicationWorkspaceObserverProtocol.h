
@protocol MTApplicationWorkspaceObserverProtocol <NSObject>

@required

- (void)observedApplicationDidInstallForBundleIdentifier:(NSString *)arg1;
- (void)observedApplicationDidUninstallForBundleIdentifier:(NSString *)arg1;

@end
