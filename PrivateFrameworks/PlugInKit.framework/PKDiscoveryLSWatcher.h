
@interface PKDiscoveryLSWatcher : NSObject <PKApplicationWorkspaceObserverProtocol> {
    PKDiscoveryDriver * _wdriver;
    <PKApplicationWorkspaceProxy> * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property PKDiscoveryDriver *wdriver;
@property (retain) <PKApplicationWorkspaceProxy> *workspace;

- (void).cxx_destruct;
- (id)initWithDriver:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)setWdriver:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (void)stopUpdates;
- (void)update;
- (void)updateWithUninstalledProxies:(id)arg1;
- (id)wdriver;
- (id)workspace;

@end
