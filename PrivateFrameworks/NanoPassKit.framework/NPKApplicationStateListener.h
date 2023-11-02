
@interface NPKApplicationStateListener : NSObject <LSApplicationWorkspaceObserverProtocol> {
    unsigned long long  _appState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _appStateLock;
    NSObject<OS_dispatch_queue> * _internalClassQueue;
    NPKObserverManager * _observerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_applicationStateWithLSApplicationState:(id)arg1;
- (void)_handleApplicationChangeNotificationWithWorkspaceApplicationProxies:(id)arg1 newStateResolver:(id /* block */)arg2;
- (void)_retrieveAppState:(id /* block */)arg1;
- (void)_updateStateWithNewState:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)appState:(id /* block */)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (unsigned long long)cachedAppState;
- (id)init;
- (void)prewarm;
- (void)registerObserver:(id)arg1;

@end
