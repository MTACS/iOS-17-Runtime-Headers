
@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    bool  __cloudKitDataNeedsFetching;
    <CloudTabStoreDelegate> * _delegate;
    bool  _didAttemptToCloseAtLeastOneTab;
    NSMutableArray * _fetchCloudKitDataCompletionHandlers;
    bool  _hasCompletedFetchOfCloudKitDataAtLeastOnce;
    bool  _hasInitiatedFetchOfCloudKitDataAtLeastOnce;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSHashTable * _observers;
    WBSEncryptedCloudKeyValueStore * _syncedDevicesStore;
    WBSEncryptedCloudKeyValueStore * _userRequestsStore;
}

@property (setter=_setCloudKitDataNeedsFetching:) bool _cloudKitDataNeedsFetching;
@property (nonatomic, readonly, copy) NSArray *allSyncedCloudTabDevices;
@property (nonatomic, readonly) NSUUID *currentDeviceUUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CloudTabStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCloudTabStore;

- (void).cxx_destruct;
- (void)_callFetchCloudKitDataCompletionHandlers;
- (void)_clearAllDevices;
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(id /* block */)arg1;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (void)_cloudKitDataDidUpdateOnServer:(id)arg1;
- (bool)_cloudKitDataNeedsFetching;
- (void)_cloudTabsEnabledDidChange;
- (id)_currentDeviceUUID;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)arg1;
- (void)_removeConflictingDevice;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)_saveCurrentDeviceCloudTabs:(id)arg1 syncCompletionHandler:(id /* block */)arg2;
- (void)_setCloudKitDataNeedsFetching:(bool)arg1;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (bool)_shouldUseCloudKitForSavingCurrentDevice;
- (id)_storeForIdentifier:(long long)arg1;
- (void)_syncedDevicesStoreDidUpdate:(id)arg1;
- (void)_userRequestsStoreDidUpdate:(id)arg1;
- (void)_waitForInitialCloudKitFetchToComplete:(id /* block */)arg1;
- (void)addCloudTabsObserver:(id)arg1;
- (id)allSyncedCloudTabDevices;
- (bool)canSaveCloudTabsForCurrentDevice;
- (void)clearTabsForCurrentDevice;
- (bool)closeAllTabsOnDevice:(id)arg1;
- (bool)closeTab:(id)arg1 onDevice:(id)arg2;
- (bool)closeTabs:(id)arg1 onDevice:(id)arg2;
- (bool)cloudTabsAreEnabled;
- (id)currentDevice;
- (id)currentDeviceUUID;
- (id)delegate;
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)arg1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)arg1 error:(id)arg2;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (id)init;
- (void)saveCurrentDeviceCloudTabs:(id)arg1;
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg1;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg1 syncCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)startObservingTabStoreStateChanges;
- (void)stopObservingTabStoreStateChanges;
- (id)syncedCloudTabDevices;
- (id)syncedCloudTabDevicesUsingFilter:(bool)arg1;
- (void)synchronizeCloudTabDevices;

@end
