
@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSArray * _appBundleIdentifersToMonitor;
    <FIFitnessAppsStateObserverDelegate> * _delegate;
    NSMutableDictionary * _fitnessAppsInstallationState;
    long long  _fitnessAppsRestrictedState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FIFitnessAppsStateObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cacheInitialFitnessAppsInstallState;
- (void)_cacheInitialFitnessAppsRestrictedState;
- (id)_filteredAppProxies:(id)arg1;
- (long long)_lock_installStateForBundleIdentifier:(id)arg1;
- (void)_updateCurrentFitnessAppsInstallStateWithProxies:(id)arg1 newState:(long long)arg2;
- (void)_updateCurrentFitnessAppsRestrictedStateWithProxies:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (bool)areFitnessAppsRestricted;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithBundleIdentifiers:(id)arg1;
- (long long)installStateForBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
