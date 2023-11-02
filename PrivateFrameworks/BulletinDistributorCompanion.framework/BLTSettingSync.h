
@interface BLTSettingSync : BLTSettingSyncInternal <BLTSectionConfigurationDelegate, BLTSectionInfoListDelegate, BLTSyncSupportedAppListDelegate> {
    BLTSectionInfoListBridgeProvider * _bridgeProvider;
    bool  _initialSyncPerformed;
    NSMutableDictionary * _reloadBBCompletions;
    BLTSectionInfoList * _sectionInfoList;
    BLTSectionInfoSyncCoordinator * _sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> * _sectionInfoSyncCoordinatorQueue;
    BLTSettingSyncSendQueue * _settingSendQueue;
    unsigned long long  _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSyncSupportedAppList * _syncSupportedAppList;
    BLTWatchKitAppList * _watchKitAppList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addReloadBBCompletion:(id /* block */)arg1 sectionID:(id)arg2;
- (void)_callAndRemoveReloadBBCompletion:(id /* block */)arg1 sectionID:(id)arg2;
- (void)_callReloadBBCompletionsForSectionID:(id)arg1;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (unsigned long long)_fetchSyncState;
- (id)_filteredAlertingSectionIDs:(id)arg1;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(bool)arg3 spoolToFile:(bool)arg4 andCompletion:(id /* block */)arg5;
- (void)_sendSpooledSyncWithCompletion:(id /* block */)arg1 withProgress:(id /* block */)arg2;
- (void)_sendSyncSupportedAppListWithInstalled:(id)arg1 removed:(id)arg2;
- (void)_setupSectionInfoListWithCompletion:(id /* block */)arg1;
- (void)_spoolInitialSync;
- (void)_storeSyncState:(unsigned long long)arg1;
- (void)_updateAllBBSectionsWithCompletion:(id /* block */)arg1 withProgress:(id /* block */)arg2 spoolToFile:(bool)arg3;
- (void)clearSectionInfoSentCache;
- (void)dealloc;
- (void)handleAllSyncComplete;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 watchKitAppList:(id)arg3;
- (bool)isSectionInfoSentCacheEmpty;
- (void)makeAuthorizationPermanentForSectionID:(id)arg1;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)performInitialSyncWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (unsigned long long)performSyncIfNeededForSectionID:(id)arg1 gizmoSectionInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3;
- (void)sectionInfoList:(id)arg1 makeAuthorizationPermanentForSectionID:(id)arg2;
- (bool)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2 transaction:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2 transaction:(id)arg3;
- (bool)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1;
- (void)sendAllSectionInfoWithSpool:(bool)arg1 completion:(id /* block */)arg2;
- (void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(bool)arg3;
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(id /* block */)arg2;
- (void)sendSectionInfosWithSectionIDs:(id)arg1 completion:(id /* block */)arg2 spoolToFile:(bool)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(bool)arg3 fromRemote:(bool)arg4;
- (void)setSectionInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setSectionInfo:(id)arg1 keypaths:(id)arg2 completion:(id /* block */)arg3;
- (id)settingOverrides;
- (id)settingsDescriptionForSectionIDs:(id)arg1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (void)syncSupportedAppListUpdated:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;

@end
