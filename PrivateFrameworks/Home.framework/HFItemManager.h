
@interface HFItemManager : NSObject <HFAccessoryObserver, HFAudioControlObserver, HFCameraObserver, HFHomeKitAccessorySettingsDataSourceDelegate, HFHomeKitSettingsObserver, HFHomeManagerObserver, HFHomeObserver, HFItemUpdating, HFLightObserver, HFMediaDestinationControllerObserver, HFMediaObjectObserver, HFMediaSessionObserver, HFNetworkConfigurationObserver, HFNetworkRouterObserver, HFPersonManagerObserver, HFPinCodeManagerObserver, HFResidentDeviceObserver, HFSiriEndpointProfileObserver, HFSoftwareUpdateControllerObserver, HFSoftwareUpdateObserver, HFStateDumpBuildable, HFSymptomFixSessionObserver, HFSymptomsHandlerObserver, HFTelevisionObserver, HFTemperatureUnitObserver, HFUserObserver, HFWalletKeyDeviceStateObserver> {
    NAFuture * _UIDiffableDataInitializationFuture;
    id /* block */  __displayFilter;
    HFItemManagerBatchedDelegateAdapter * _batchedDelegateAdapterAllowingReads;
    HFItemManagerBatchedDelegateAdapter * _batchedDelegateAdapterDisallowingReads;
    NSMapTable * _childItemsByParentItem;
    <HFItemManagerDelegate> * _delegate;
    <HFDiffableDataSource> * _diffableDataSource;
    bool  _diffableDataSourceDisabled;
    NSObject<OS_dispatch_queue> * _diffableDataSourceQueue;
    <NAScheduler> * _diffableDataSourceScheduler;
    NSMutableSet * _disableUpdateReasons;
    NAFuture * _firstFastUpdateFuture;
    NAFuture * _firstFullUpdateFuture;
    bool  _hasRequestedFirstUpdate;
    HMHome * _home;
    NSString * _identifier;
    bool  _isApplyingSnapshot;
    NSArray * _itemModules;
    NSArray * _itemProviders;
    HMHome * _lastUpdatedHome;
    NAFuture * _latestSnapshotGenerationFuture;
    NSObject<OS_dispatch_group> * _mainThreadLoadGroup;
    NSSet * _moduleItemProviderSet;
    unsigned long long  _overallLoadingState;
    <HFCharacteristicReadPolicy> * _readPolicy;
    NSArray * _sections;
    HFItem * _sourceItem;
    NSSet * _subclassItemProviderSet;
    NSMutableDictionary * _suppressedCharacteristicUpdatesByReason;
    bool  _useCustomDiffableDataSource;
}

@property (nonatomic, retain) NAFuture *UIDiffableDataInitializationFuture;
@property (nonatomic, copy) id /* block */ _displayFilter;
@property (nonatomic, readonly) NSSet *allDisplayedItems;
@property (nonatomic, readonly) NSSet *allItems;
@property (nonatomic, retain) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterAllowingReads;
@property (nonatomic, retain) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterDisallowingReads;
@property (nonatomic, retain) NSMapTable *childItemsByParentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFItemManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HFDiffableDataSource> *diffableDataSource;
@property (nonatomic) bool diffableDataSourceDisabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *diffableDataSourceQueue;
@property (nonatomic, readonly) <NAScheduler> *diffableDataSourceScheduler;
@property (nonatomic, readonly) NSMutableSet *disableUpdateReasons;
@property (nonatomic, readonly) NAFuture *firstFastUpdateFuture;
@property (nonatomic, readonly) NAFuture *firstFullUpdateFuture;
@property (nonatomic) bool hasRequestedFirstUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isApplyingSnapshot;
@property (nonatomic, retain) NSArray *itemModules;
@property (nonatomic, retain) NSArray *itemProviders;
@property (nonatomic, retain) HMHome *lastUpdatedHome;
@property (nonatomic, retain) NAFuture *latestSnapshotGenerationFuture;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *mainThreadLoadGroup;
@property (nonatomic, retain) NSSet *moduleItemProviderSet;
@property (nonatomic) unsigned long long overallLoadingState;
@property (nonatomic, retain) <HFCharacteristicReadPolicy> *readPolicy;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) HFItem *sourceItem;
@property (nonatomic, retain) NSSet *subclassItemProviderSet;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *suppressedCharacteristicUpdatesByReason;
@property (nonatomic) bool useCustomDiffableDataSource;

+ (bool)_canReloadDuringUnitTests;

- (void).cxx_destruct;
- (id)UIDiffableDataInitializationFuture;
- (id)_allDisplayedItemsIncludingInternalItems;
- (id)_allItemsIncludingInternalItems;
- (id)_allSuppressedCharacteristics;
- (void)_applyReloadSnapshot:(id)arg1 withAnimation:(bool)arg2;
- (void)_batchItemUpdateFutureWrappers:(id)arg1 removedItems:(id)arg2 batchingIntervals:(id)arg3 logger:(id)arg4;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_cameraForCameraControl:(id)arg1;
- (id)_cameraForCameraStream:(id)arg1;
- (id)_cameraForUserSettings:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_debug_itemDescriptions;
- (id)_debug_itemManagerDescription;
- (id)_debug_itemProviderDescriptions;
- (void)_debug_registerForStateDump;
- (id)_dependentHomeKitObjectsOfClass:(Class)arg1 inHomeKitObjects:(id)arg2;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_directItemDependenciesForHomeKitObjects:(id)arg1 class:(Class)arg2;
- (id /* block */)_displayFilter;
- (id)_footerTitleForSectionWithIdentifier:(id)arg1;
- (id)_generateParentChildMappingForSections:(id)arg1;
- (id)_homeFuture;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2;
- (id)_internalItems;
- (id)_invalidationReasonsForAddedOrRemovedAccessory:(id)arg1;
- (id)_invalidationReasonsForAddedOrRemovedMediaSystem:(id)arg1;
- (bool)_isUsingOnlyItemModules;
- (id)_itemForSorting;
- (id)_itemsOfClass:(Class)arg1 inItems:(id)arg2 allowTransformedItems:(bool)arg3;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingChange:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingChanges:(id)arg1;
- (id)_itemsToUpdateForAllowAccessWhileLockedSettingChange;
- (id)_itemsToUpdateForApplicationResignActive;
- (id)_itemsToUpdateForHomeKitKeyPaths:(id)arg1 forHomeKitObjectIdentifiers:(id)arg2;
- (id)_itemsToUpdateForHomeKitSettingsChange:(id)arg1;
- (id)_itemsToUpdateForIncomingInvitation:(id)arg1;
- (id)_itemsToUpdateForLightProfiles:(id)arg1;
- (id)_itemsToUpdateForMediaObjectChange:(id)arg1;
- (id)_itemsToUpdateForMediaProfileContainer:(id)arg1;
- (id)_itemsToUpdateForMediaSessionChange:(id)arg1;
- (id)_itemsToUpdateForMediaSystemChange:(id)arg1;
- (id)_itemsToUpdateForModifiedAccessCodes:(id)arg1;
- (id)_itemsToUpdateForModifiedAccessories:(id)arg1;
- (id)_itemsToUpdateForModifiedActionSets:(id)arg1;
- (id)_itemsToUpdateForModifiedActions:(id)arg1;
- (id)_itemsToUpdateForModifiedCameras:(id)arg1;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1 includeSuppressedCharacteristics:(bool)arg2;
- (id)_itemsToUpdateForModifiedEvents:(id)arg1;
- (id)_itemsToUpdateForModifiedHomePersonManagerSettings:(id)arg1;
- (id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg1;
- (id)_itemsToUpdateForModifiedMetadataForMediaDestinationController:(id)arg1;
- (id)_itemsToUpdateForModifiedNetworkConfigurationProfiles:(id)arg1;
- (id)_itemsToUpdateForModifiedNetworkProtectionGroups:(id)arg1;
- (id)_itemsToUpdateForModifiedNetworkRouterProfiles:(id)arg1;
- (id)_itemsToUpdateForModifiedPersonManagers:(id)arg1;
- (id)_itemsToUpdateForModifiedPersons:(id)arg1;
- (id)_itemsToUpdateForModifiedResidentDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedRooms:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceGroups:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceTypes:(id)arg1;
- (id)_itemsToUpdateForModifiedServices:(id)arg1;
- (id)_itemsToUpdateForModifiedSharingDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedSignificantEvents:(id)arg1;
- (id)_itemsToUpdateForModifiedSoftwareUpdateControllers:(id)arg1;
- (id)_itemsToUpdateForModifiedSoftwareUpdates:(id)arg1;
- (id)_itemsToUpdateForModifiedTriggers:(id)arg1;
- (id)_itemsToUpdateForModifiedUUIDs:(id)arg1;
- (id)_itemsToUpdateForModifiedUsers:(id)arg1;
- (id)_itemsToUpdateForModifiedWalletKeyDeviceState:(id)arg1;
- (id)_itemsToUpdateForModifiedZones:(id)arg1;
- (id)_itemsToUpdateForOutgoingInvitation:(id)arg1;
- (id)_itemsToUpdateForRemoteAccessChange;
- (id)_itemsToUpdateForSiriEndpointProfileObjectChange:(id)arg1;
- (id)_itemsToUpdateForSoftwareUpdateV2ChangeToAccessory:(id)arg1;
- (id)_itemsToUpdateForSoftwareUpdateV2ProgressChangeToAccessory:(id)arg1;
- (id)_itemsToUpdateForTelevisionProfiles:(id)arg1;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (id)_itemsWithDependenciesPassingTest:(id /* block */)arg1 forItems:(id)arg2;
- (id)_legacy_buildSectionsWithDisplayedItems:(id)arg1;
- (unsigned long long)_loadingStateForItem:(id)arg1;
- (void)_notifyDelegateOfChangesFromDiff:(id)arg1 logger:(id)arg2;
- (void)_notifyDelegateOfItemOperations:(id)arg1 logger:(id)arg2;
- (void)_notifyDelegateOfSectionOperations:(id)arg1 logger:(id)arg2;
- (unsigned long long)_numberOfSections;
- (id)_performUpdateForChildItemsOfItem:(id)arg1 withContext:(id)arg2 isInternal:(bool)arg3;
- (id)_performUpdateForItem:(id)arg1 withContext:(id)arg2 isInternal:(bool)arg3 isChild:(bool)arg4;
- (void)_prefetchResourcesIfNeededForItems:(id)arg1;
- (id)_processBatchUpdateForFutureWrappers:(id)arg1 removedItems:(id)arg2 logger:(id)arg3;
- (void)_registerForExternalUpdates;
- (id)_reloadAllItemProvidersFromSenderSelector:(SEL)arg1;
- (id)_reloadAndUpdateItemsForProviders:(id)arg1 updateItems:(id)arg2 senderSelector:(SEL)arg3;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(bool)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(bool)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5 fastInitialUpdatePromise:(id)arg6;
- (void)_removeDelegateNotifications;
- (bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (unsigned long long)_sectionForItem:(id)arg1;
- (unsigned long long)_sectionForItem:(id)arg1 assertOnNotFound:(bool)arg2;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_serviceGroupItemForServiceGroup:(id)arg1 inItems:(id)arg2;
- (id)_serviceItemsToHideInSet:(id)arg1 allServiceGroupItems:(id)arg2;
- (void)_setDisplayFilter:(id /* block */)arg1 recalculateVisibility:(bool)arg2;
- (void)_setupDelegateNotifications;
- (bool)_shouldBuildItemProvidersAndModulesForNilHome;
- (bool)_shouldDisableOptionalDataDuringFastInitialUpdate;
- (bool)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (bool)_shouldPerformFastInitialUpdates;
- (bool)_shouldPerformUpdateOnMainThread;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2;
- (void)_unregisterForExternalUpdates;
- (void)_updateExternalUpdatesEnabled:(bool)arg1 reloadItems:(bool)arg2;
- (void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg1 canFinishTransaction:(bool)arg2;
- (void)_updateOverallLoadingStateAndNotifyDelegate;
- (void)_updateRepresentationForExternalItemsWithUpdatedOrAddedItems:(id)arg1 removedItems:(id)arg2 logger:(id)arg3;
- (void)_updateRepresentationForInternalItemsWithUpdatedItems:(id)arg1;
- (void)_updateRepresentationWithCustomDiffableDataSourceForExternalItemsWithUpdatedOrAddedItems:(id)arg1 removedItems:(id)arg2 logger:(id)arg3;
- (id)_updateRepresentationWithUIDiffableDataSourceForExternalItemsWithUpdatedOrAddedItems:(id)arg1 removedItems:(id)arg2 logger:(id)arg3;
- (id)_updateResultsForItems:(id)arg1 context:(id)arg2;
- (id)_updateResultsForItems:(id)arg1 removedItems:(id)arg2 context:(id)arg3 allowDelaying:(bool)arg4;
- (void)_willUpdateSections;
- (void)accessory:(id)arg1 didAddControlTarget:(id)arg2;
- (void)accessory:(id)arg1 didAddProfile:(id)arg2;
- (void)accessory:(id)arg1 didAddSymptomsHandler:(id)arg2;
- (void)accessory:(id)arg1 didRemoveControlTarget:(id)arg2;
- (void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateConfigurationStateForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateConfiguredNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateDefaultNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(bool)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessory:(id)arg1 didUpdateLastKnownOperatingStateResponseForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateLastKnownSleepDiscoveryModeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateLoggedInAccount:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateServiceSubtypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateSoftwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateSupportsWalletKey:(bool)arg2;
- (void)accessory:(id)arg1 didUpdateUserNotifiedOfSoftwareUpdate:(bool)arg2;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidRemoveSymptomsHandler:(id)arg1;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryDidUpdateAudioDestination:(id)arg1;
- (void)accessoryDidUpdateAudioDestinationController:(id)arg1;
- (void)accessoryDidUpdateCalibrationStatus:(id)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateDiagnosticsTransferSupport:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdatePendingConfigurationIdentifier:(id)arg1;
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessoryDidUpdateTargetControlSupport:(id)arg1;
- (id)allDisplayedItems;
- (id)allItems;
- (id)applySnapshotForUpdatedExternalItems:(id)arg1 removedItems:(id)arg2 logger:(id)arg3;
- (void)applyWithBlock:(id /* block */)arg1;
- (id)attributedFooterTitleForSection:(unsigned long long)arg1;
- (id)attributedTitleForSection:(unsigned long long)arg1;
- (void)audioControl:(id)arg1 didUpdateMuted:(bool)arg2;
- (void)audioControl:(id)arg1 didUpdateVolume:(float)arg2;
- (id)batchedDelegateAdapterAllowingReads;
- (id)batchedDelegateAdapterDisallowingReads;
- (void)beginSuppressingUpdatesForCharacteristics:(id)arg1 withReason:(id)arg2;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStream:(id)arg1 didUpdateAudioStreamSettingWithError:(id)arg2;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (void)cameraUserSettingsDidUpdate:(id)arg1;
- (id)childItemsByParentItem;
- (id)childItemsForItem:(id)arg1;
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2;
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2 conformingToProtocol:(id)arg3;
- (void)clipManager:(id)arg1 didRemoveSignificantEventsWithUUIDs:(id)arg2;
- (void)clipManager:(id)arg1 didUpdateSignificantEvents:(id)arg2;
- (id)currentSectionIdentifiersSnapshot;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2;
- (void)didUpdateDemoModeStateForAccessory:(id)arg1;
- (id)diffableDataItemManagerDelegate;
- (id)diffableDataSource;
- (bool)diffableDataSourceDisabled;
- (id)diffableDataSourceQueue;
- (id)diffableDataSourceScheduler;
- (void)disableExternalUpdatesWithReason:(id)arg1;
- (id)disableUpdateReasons;
- (id)displayedItemAtIndexPath:(id)arg1;
- (id)displayedItemsInSection:(unsigned long long)arg1;
- (id)displayedItemsInSectionWithIdentifier:(id)arg1;
- (id)displayedSectionIdentifierForSectionIndex:(unsigned long long)arg1;
- (void)endDisableExternalUpdatesWithReason:(id)arg1;
- (void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg1 updateAffectedItems:(bool)arg2;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (void)executionEnvironmentWillEnterForeground:(id)arg1;
- (void)executionEnvironmentWillResignActive:(id)arg1;
- (id)firstFastUpdateFuture;
- (id)firstFullItemUpdateFuture;
- (id)firstFullUpdateFuture;
- (void)fixSessionDidChangeForAccessory:(id)arg1;
- (id)footerTitleForSection:(unsigned long long)arg1;
- (id)generateSnapshotInfo;
- (bool)hasRequestedFirstUpdate;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessoryNetworkProtectionGroup:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
- (void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessoryNetworkProtectionGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessoryNetworkProtectionGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateAreBulletinNotificationsSupported:(bool)arg2;
- (void)home:(id)arg1 didUpdateAudioAnalysisClassifierOptions:(unsigned long long)arg2;
- (void)home:(id)arg1 didUpdateMediaSystem:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didUpdateOnboardAudioAnalysis:(bool)arg2;
- (void)home:(id)arg1 didUpdatePersonManagerSettings:(id)arg2;
- (void)home:(id)arg1 didUpdateReprovisionStateForAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUpdateSiriPhraseOptions:(unsigned long long)arg2;
- (void)home:(id)arg1 didUpdateSiriTriggerPhraseOptions:(unsigned long long)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(id)arg1 willExecuteActionSets:(id)arg2;
- (void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
- (void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
- (void)homeDidAddWalletKey:(id)arg1;
- (void)homeDidRemoveWalletKey:(id)arg1;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)homeDidUpdateHomeEnergyManagerEnabled:(id)arg1;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeDidUpdateNetworkRouterSupport:(id)arg1;
- (void)homeDidUpdateProtectionMode:(id)arg1;
- (void)homeDidUpdateSoundCheck:(id)arg1;
- (void)homeDidUpdateToROAR:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManager:(id)arg1 didUpdateHH2State:(bool)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)homeManagerDidFinishUnknownChange:(id)arg1;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (id)identifier;
- (id)indexPathForItem:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (bool)isApplyingSnapshot;
- (bool)itemIsBeingDisplayed:(id)arg1;
- (id)itemModules;
- (id)itemProviders;
- (id)itemSectionForSectionIndex:(unsigned long long)arg1;
- (id)lastUpdatedHome;
- (id)latestSnapshotGenerationFuture;
- (void)lightProfile:(id)arg1 didUpdateSettings:(id)arg2;
- (id)mainThreadLoadGroup;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (void)mediaDestinationController:(id)arg1 didUpdateDestination:(id)arg2;
- (void)mediaDestinationControllerDidUpdateAvailableDestinations:(id)arg1;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(id)arg1 failedToUpdatePlaybackStateWithError:(id)arg2;
- (void)mediaSession:(id)arg1 willUpdatePlaybackState:(long long)arg2;
- (void)mediaSessionDidUpdate:(id)arg1;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateConfiguredName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;
- (id)moduleItemProviderSet;
- (id)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (unsigned long long)numberOfSections;
- (unsigned long long)overallLoadingState;
- (id)performItemUpdateRequest:(id)arg1;
- (void)personManager:(id)arg1 didRemoveFaceCropsWithUUIDs:(id)arg2;
- (void)personManager:(id)arg1 didRemovePersonsWithUUIDs:(id)arg2;
- (void)personManager:(id)arg1 didUpdatePersonFaceCrops:(id)arg2;
- (void)personManager:(id)arg1 didUpdatePersons:(id)arg2;
- (void)pinCodeManagerDidUpdate:(id)arg1 pinCodes:(id)arg2;
- (void)profileDidUpdateAccessViolation:(id)arg1;
- (void)profileDidUpdateAllowedHosts:(id)arg1;
- (void)profileDidUpdateMediaSourceDisplayOrder:(id)arg1;
- (void)profileDidUpdateNetworkProtectionMode:(id)arg1;
- (void)profileDidUpdateNetworkStatus:(id)arg1;
- (void)profileDidUpdateSatellites:(id)arg1;
- (void)profileDidUpdateWiFiCredentialType:(id)arg1;
- (void)profileDidUpdateWiFiReconfigurationSupport:(id)arg1;
- (id)readPolicy;
- (void)recalculateVisibilityAndSortAllItems;
- (void)reconfigureUIRepresentationForItems:(id)arg1 withAnimation:(bool)arg2;
- (id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg1;
- (id)reloadAndUpdateItemsForProviders:(id)arg1 senderSelector:(SEL)arg2;
- (void)reloadUIRepresentationForItems:(id)arg1 withAnimation:(bool)arg2;
- (void)reloadUIRepresentationForSections:(id)arg1 withAnimation:(bool)arg2;
- (void)reloadUIRepresentationWithAnimation:(bool)arg1;
- (void)resetItemProvidersAndModules;
- (void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(bool)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForDisplayedSectionIdentifier:(id)arg1;
- (id)sections;
- (void)setBatchedDelegateAdapterAllowingReads:(id)arg1;
- (void)setBatchedDelegateAdapterDisallowingReads:(id)arg1;
- (void)setChildItemsByParentItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setDiffableDataSourceDisabled:(bool)arg1;
- (void)setHasRequestedFirstUpdate:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsApplyingSnapshot:(bool)arg1;
- (void)setItemModules:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setLastUpdatedHome:(id)arg1;
- (void)setLatestSnapshotGenerationFuture:(id)arg1;
- (void)setMainThreadLoadGroup:(id)arg1;
- (void)setModuleItemProviderSet:(id)arg1;
- (void)setOverallLoadingState:(unsigned long long)arg1;
- (void)setReadPolicy:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setSubclassItemProviderSet:(id)arg1;
- (void)setSuppressedCharacteristicUpdatesByReason:(id)arg1;
- (void)setUIDiffableDataInitializationFuture:(id)arg1;
- (void)setUpCustomDiffableDataSource;
- (void)setUseCustomDiffableDataSource:(bool)arg1;
- (void)set_displayFilter:(id /* block */)arg1;
- (void)settings:(id)arg1 didUpdateForIdentifier:(id)arg2 keyPath:(id)arg3;
- (void)settings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3 homeKitObjectIdentifiers:(id)arg4;
- (void)settings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (void)settingsInvalidatedForNotificationCenter:(id)arg1;
- (bool)shouldPerformInitialLoadOnMainThread;
- (void)siriEndpointProfile:(id)arg1 didUpdateAssistants:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateCurrentAssistant:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateManuallyDisabled:(bool)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateMultifunctionButton:(long long)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateNeedsOnboarding:(bool)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSessionHubIdentifier:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSessionState:(long long)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSiriEngineVersion:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSupportsOnboarding:(bool)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentation:(id)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentationAvailable:(bool)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateNeedsAttentionReasons:(unsigned long long)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (void)softwareUpdateController:(id)arg1 didUpdateAvailableUpdate:(id)arg2;
- (void)softwareUpdateV2DidUpdateForAccessory:(id)arg1;
- (void)softwareUpdateV2DidUpdateProgressForAccessory:(id)arg1;
- (void)sortDisplayedItemsInSection:(long long)arg1;
- (id)sourceItem;
- (id)subclassItemProviderSet;
- (id)suppressedCharacteristicUpdatesByReason;
- (void)symptomsHandler:(id)arg1 didUpdateSymptoms:(id)arg2;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(bool)arg2;
- (id)titleForSection:(unsigned long long)arg1;
- (id)updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2;
- (void)updateSettingValue:(id)arg1 forKeyPath:(id)arg2 accessoryIdentifier:(id)arg3;
- (bool)useCustomDiffableDataSource;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)user:(id)arg1 didUpdateMediaContentProfileAccessControl:(id)arg2 forHome:(id)arg3;
- (void)user:(id)arg1 didUpdatePersonManagerSettings:(id)arg2;
- (void)walletKeyDeviceStateUpdated:(id)arg1 inHome:(id)arg2;

@end