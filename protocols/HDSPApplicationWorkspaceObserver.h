
@protocol HDSPApplicationWorkspaceObserver <NSObject>

@required

- (NSSet *)observedApplicationBundleIdentifiers;
- (void)observedApplicationDidInstall:(NSString *)arg1;
- (void)observedApplicationDidUninstall:(NSString *)arg1;

@end
