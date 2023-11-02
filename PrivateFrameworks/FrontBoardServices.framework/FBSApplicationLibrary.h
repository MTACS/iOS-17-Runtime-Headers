
@interface FBSApplicationLibrary : NSObject <BSInvalidatable, FBSApplicationInfoProvider, LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _applicationWorkspace;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_queue> * _completionQueue;
    FBSApplicationLibraryConfiguration * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMapTable * _observerQueue_tokensToBlocks;
    <BSInvalidatable> * _stateCaptureAssertion;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _workQueue_identitiesByBundleID;
    NSMutableSet * _workQueue_injectedAppIdentifiers;
    NSMutableDictionary * _workQueue_installedApplicationsByIdentity;
    NSMutableArray * _workQueue_pendingSynchronizationExecutionBlocks;
    NSMutableDictionary * _workQueue_placeholdersByIdentity;
    unsigned long long  _workQueue_synchronizationActionCount;
    bool  _workQueue_usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUsingNetwork, nonatomic, readonly) bool usingNetwork;

- (void).cxx_destruct;
- (id)_initWithApplicationWorkspace:(id)arg1 configuration:(id)arg2;
- (void)_reloadPlaceholdersNotificationFired;
- (void)addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2;
- (void)addApplicationRecord:(id)arg1;
- (id)allInstalledApplications;
- (id)allPlaceholders;
- (id)applicationInfoForAuditToken:(id)arg1;
- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidChangePersonas:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)installedApplicationForIdentity:(id)arg1;
- (id)installedApplicationForIdentityString:(id)arg1;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)installedApplicationsForBundleIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isUsingNetwork;
- (void)networkUsageChanged:(bool)arg1;
- (id)observeDidAddApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidAddPlaceholdersWithBlock:(id /* block */)arg1;
- (id)observeDidCancelPlaceholdersWithBlock:(id /* block */)arg1;
- (id)observeDidChangeNetworkUsageWithBlock:(id /* block */)arg1;
- (id)observeDidDemoteApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidRemoveApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidReplaceApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidUpdateApplicationsWithBlock:(id /* block */)arg1;
- (id)placeholderForIdentity:(id)arg1;
- (id)placeholderForIdentityString:(id)arg1;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (id)placeholdersForBundleIdentifier:(id)arg1;
- (void)removeObserverForToken:(id)arg1;
- (void)synchronize:(id /* block */)arg1;
- (void)uninstallApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)uninstallApplicationIdentity:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;

@end
