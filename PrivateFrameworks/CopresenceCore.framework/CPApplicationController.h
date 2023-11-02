
@interface CPApplicationController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void definedSystemActivityIdentifiersCache;
    void featureFlags;
    void lock;
    void observers;
    void supportedBundleIdentifierCache;
}

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;

@end
