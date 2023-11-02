
@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudInternalServiceProtocol> {
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkIsReadyForAnalysisWithReply:(id /* block */)arg1;
- (void)acceptShareWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (id)activateLibraryScopeWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScopeWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)deactivateLibraryScopeWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)emailAddressForKey:(long long)arg1 reply:(id /* block */)arg2;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)fetchShareWithURL:(id)arg1 ignoreExistingShare:(bool)arg2 reply:(id /* block */)arg3;
- (void)forceParticipantAssetTrashNotificationWithReply:(id /* block */)arg1;
- (void)forceSyncMomentShareWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)getCPLConfigrationValueForKey:(id)arg1 reply:(id /* block */)arg2;
- (void)getCurrentTransferProgress:(id /* block */)arg1;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)getNotUploadedCount:(id /* block */)arg1;
- (void)getResetSyncStatusWithReply:(id /* block */)arg1;
- (void)getSystemBudgetsWithReply:(id /* block */)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;
- (void)isReadyForAnalysisQuickCheckWithReply:(id /* block */)arg1;
- (void)isReadyForAnalysisWithReply:(id /* block */)arg1;
- (void)isReadyForCloudPhotoLibraryWithReply:(id /* block */)arg1;
- (void)keyForEmailAddress:(id)arg1 reply:(id /* block */)arg2;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScopeWithUUID:(id)arg1 excludePersonUUIDs:(id)arg2 reply:(id /* block */)arg3;
- (void)markResourcesPurgeableWithUrgency:(long long)arg1 assetUuids:(id)arg2 reply:(id /* block */)arg3;
- (void)overrideSystemBudgetsForSyncSession:(bool)arg1 pauseReason:(id)arg2 systemBudgets:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)personInfoDictionaryForPersonID:(id)arg1 reply:(id /* block */)arg2;
- (void)publishShareWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)queryUserIdentitiesWithEmails:(id)arg1 phoneNumbers:(id)arg2 reply:(id /* block */)arg3;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)refreshLibraryScopeWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)removeParticipantsWithParticipantUUIDs:(id)arg1 fromLibraryScopeWithIdentifier:(id)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 reply:(id /* block */)arg5;
- (void)requestDeviceLibraryConfigurationChange:(long long)arg1 reply:(id /* block */)arg2;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithReply:(id /* block */)arg1;
- (void)setCloudPhotoLibraryEnabledState:(bool)arg1;
- (void)setCloudPhotoLibraryPauseState:(bool)arg1 reason:(short)arg2;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)sharedLibraryRampCheckWithReply:(id /* block */)arg1;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(id /* block */)arg1;
- (void)startExitFromLibraryScopeWithIdentifier:(id)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 reply:(id /* block */)arg4;
- (void)syncCloudPhotoLibrary;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)arg1;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithReply:(id /* block */)arg1;

@end
