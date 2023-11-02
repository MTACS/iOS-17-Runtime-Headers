
@protocol PKApplicationWorkspaceObserverProtocol <NSObject>

@optional

- (void)pluginsDidInstall:(NSArray *)arg1;
- (void)pluginsDidUninstall:(NSArray *)arg1;
- (void)pluginsWillUninstall:(NSArray *)arg1;

@end
