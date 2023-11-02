
@interface SBApplicationPlaceholderController : NSObject <SBApplicationPlaceholderLifecycleObserver, SBHProxiedApplicationPlaceholderDelegate, SBLeafIconObserver> {
    SBApplicationController * _appController;
    bool  _hasDownloadedFromStore;
    SBApplicationLibraryObserver * _lsWorkspaceObserver;
    NSMutableSet * _pendingAdded;
    NSMutableSet * _pendingCancelled;
    NSMutableSet * _pendingInstalled;
    NSMutableDictionary * _placeholdersByBundleID;
    NSCountedSet * _removingPlaceholderProxies;
    bool  _usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addPlaceholders:(id)arg1;
- (void)_finishPlaceholder:(id)arg1;
- (void)_finishSwappingPlaceholderAfterCachingIcon:(id)arg1;
- (void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;
- (void)_processPendingProxies;
- (void)_removePlaceholders:(id)arg1 forInstall:(bool)arg2;
- (void)applicationPlaceholdersAdded:(id)arg1;
- (void)applicationPlaceholdersCancelled:(id)arg1;
- (void)applicationPlaceholdersInstalled:(id)arg1;
- (void)applicationPlaceholdersNetworkUsageChanged:(bool)arg1;
- (void)dealloc;
- (bool)hasDownloadedStoreApplication;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)iconManager;
- (id)init;
- (bool)isUsingNetwork;
- (id)placeholderForDisplayID:(id)arg1;
- (bool)placeholderRepresentsNewAppInstallFromStore:(id)arg1;
- (bool)placeholderShouldAllowPausing:(id)arg1;
- (void)placeholderWantsUninstall:(id)arg1;
- (id)placeholdersByDisplayID;

@end
