
@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient

- (void)acceptShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)activateLibraryScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 error:(id*)arg3;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)deactivateLibraryScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)emailAddressForKey:(long long)arg1 error:(id*)arg2;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)fetchShareFromShareURL:(id)arg1 ignoreExistingShare:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)forceParticipantAssetTrashNotificationCompletionHandler:(id /* block */)arg1;
- (void)forceSyncMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCPLConfigrationValueForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCurrentTransferProgress:(id /* block */)arg1;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNotUploadedCount:(id /* block */)arg1;
- (unsigned long long)getResetSyncStatusWithError:(id*)arg1;
- (void)getSystemBudgetsWithReply:(id /* block */)arg1;
- (bool)isReadyForAnalysis;
- (bool)isReadyForAnalysisQuickCheck;
- (bool)isReadyForCloudPhotoLibrary;
- (long long)keyForEmailAddress:(id)arg1 error:(id*)arg2;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScope:(id)arg1 excludePersonUUIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)markResourcesPurgeableWithUrgency:(long long)arg1 assetUuids:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)overrideSystemBudgetsForSyncSession:(bool)arg1 pauseReason:(id)arg2 systemBudgets:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id)personInfoDictionaryForPersonID:(id)arg1 error:(id*)arg2;
- (void)publishShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)refreshLibraryScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeParticipantsWithParticipantUUIDs:(id)arg1 fromLibraryScopeWithIdentifier:(id)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)requestDeviceLibraryConfigurationChange:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithCompletionHandler:(id /* block */)arg1;
- (void)setCloudPhotoLibraryEnabledState:(bool)arg1;
- (void)setCloudPhotoLibraryEnabledStateSync:(bool)arg1;
- (void)setCloudPhotoLibraryPauseState:(bool)arg1 reason:(short)arg2;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldAutoEnableiCPLOnOSXWithError:(id*)arg1;
- (void)startExitFromLibraryScopeWithIdentifier:(id)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)syncCloudPhotoLibrary;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(bool)arg1 reason:(short)arg2;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)arg1;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithCompletionHandler:(id /* block */)arg1;

@end
