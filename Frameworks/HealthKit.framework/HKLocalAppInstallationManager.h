
@interface HKLocalAppInstallationManager : HKWatchAppInstallationManager <LSApplicationWorkspaceObserverProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)isWatchAppInstalledWithError:(id*)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
