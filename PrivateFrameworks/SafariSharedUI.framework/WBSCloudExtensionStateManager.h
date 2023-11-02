
@interface WBSCloudExtensionStateManager : NSObject {
    NSArray * _cloudDevices;
    NSDictionary * _cloudExtensionStates;
    bool  _extensionSyncEnabled;
    bool  _hasSuccessfullyUpdatedCloudExtensionStatesAtLeastOnce;
    WBSPeriodicActivityScheduler * _inactiveDevicePruningScheduler;
    bool  _isCloudExtensionStateAccurateOnThisDevice;
    long long  _manateeState;
    bool  _performFetchAfterNextSave;
    WBSPeriodicActivityScheduler * _periodicDeviceSavingScheduler;
    NSMutableArray * _stateProviders;
}

@property (getter=isExtensionSyncEnabled, nonatomic) bool extensionSyncEnabled;
@property (nonatomic) long long manateeState;

+ (id)_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)arg1 fromCloudExtensionStates:(id)arg2;
+ (bool)_determineEnabledStateFromCloudExtensionState:(id)arg1 forProfileServerID:(id)arg2;
+ (id)_determineNewTabPageFromCloudDeviceState:(id)arg1;
+ (id)_removeDeviceWithUUIDString:(id)arg1 fromCloudDevices:(id)arg2;
+ (id)_removeStatesForDeviceWithUUIDString:(id)arg1 fromCloudExtensionStates:(id)arg2;
+ (id)_singleExtensionStates:(id)arg1 withStateRemovedForDeviceWithUUIDString:(id)arg2;
+ (id)_uuidStringsOfInactiveCloudDevices:(id)arg1 currentDeviceUUIDString:(id)arg2;
+ (id)sharedManager;
+ (id)test_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)arg1 fromCloudExtensionStates:(id)arg2;
+ (bool)test_determineEnabledStateFromCloudExtensionState:(id)arg1 forProfileServerID:(id)arg2;
+ (id)test_determineNewTabPageFromCloudDeviceState:(id)arg1;
+ (id)test_removeDeviceWithUUIDString:(id)arg1 fromCloudDevices:(id)arg2;
+ (id)test_removeStatesForDeviceWithUUIDString:(id)arg1 fromCloudExtensionStates:(id)arg2;
+ (id)test_uuidStringsOfInactiveCloudDevices:(id)arg1 currentDeviceUUIDString:(id)arg2;

- (void).cxx_destruct;
- (id)_allComposedIdentifiersAssociatedWithComposedIdentifier:(id)arg1;
- (bool)_cloudDeviceMatchesLocalDeviceForCurrentDevice;
- (id)_cloudExtensionStateAssociatedWithComposedIdentifier:(id)arg1;
- (id)_cloudExtensionStateForComposedIdentifiers:(id)arg1;
- (bool)_cloudExtensionStatesMatchLocalExtensionStatesForCurrentDevice;
- (void)_cloudExtensionStatesWereUpdated;
- (bool)_cloudStateMatchesLocalStateForCurrentDevice;
- (id)_composedIdentifierForBundleIdentifier:(id)arg1 relatedToComposedIdentifier:(id)arg2;
- (id)_defaultWebExtensionsController;
- (void)_deleteCurrentDeviceFromCloudKit;
- (void)_determineExtensionSyncAvailabilityIgnoringExtensionSyncEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_determineExtensionSyncAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)_ensureCurrentDeviceIsSavedPeriodically;
- (id)_extensionDeviceDictionaryForCurrentDevice;
- (id)_extensionStatesDictionaryForCurrentDevice;
- (void)_extensionSyncEnabledStateDidChangeDistributedNotificationHandler:(id)arg1;
- (void)_getCloudExtensionStatesWithCompletionHandler:(id /* block */)arg1;
- (void)_getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)arg1;
- (void)_getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)arg1;
- (bool)_hasInstalledApplicationWithIdentifier:(id)arg1;
- (void)_pruneInactiveDevicesFromCloudKitWithCompletionHandler:(id /* block */)arg1;
- (void)_saveCurrentDeviceToCloudKitWithCompletionHandler:(id /* block */)arg1;
- (void)_saveExtensionStatesWithDictionaryRepresentation:(id)arg1 forDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_schedulePruningOfInactiveDevices;
- (void)_updateCloudExtensionStatesFromSafariBookmarksSyncAgent:(id)arg1;
- (void)_updateLocalStateFromCloudExtensionState;
- (void)_updateStateProvidersFromCloudExtensionState;
- (void)addProvider:(id)arg1;
- (id)extensionAppsFromOtherDevices;
- (void)getLockupViewsForAppsOnOtherDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)isExtensionEnabledInCloudWithComposedIdentifier:(id)arg1 forProfileServerID:(id)arg2;
- (bool)isExtensionSyncEnabled;
- (void)localExtensionStateDidChange;
- (long long)manateeState;
- (void)removeProvider:(id)arg1;
- (void)setExtensionSyncEnabled:(bool)arg1;
- (void)setManateeState:(long long)arg1;
- (void)updateNewTabPageFromCloudDeviceState;

@end
