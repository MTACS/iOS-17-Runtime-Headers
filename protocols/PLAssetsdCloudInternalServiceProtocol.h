
@protocol PLAssetsdCloudInternalServiceProtocol <NSObject>

@required

- (void)acceptShareWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)activateLibraryScopeWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cloudSharingSpaceManagementRequestWithType:(void *)arg1 optionalBytesToPurge:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScopeWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)createPhotostreamAlbumWithStreamID:(NSString *)arg1;
- (void)deactivateLibraryScopeWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)emailAddressForKey:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)enablePhotostreamsWithStreamID:(NSString *)arg1;
- (void)fetchShareWithURL:(void *)arg1 ignoreExistingShare:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)forceParticipantAssetTrashNotificationWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)forceSyncMomentShareWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getCPLConfigrationValueForKey:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getCurrentTransferProgress:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, unsigned long long, unsigned long long, void*
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeStatusCounts *, NSError *, void*
- (void)getNotUploadedCount:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, unsigned long long, NSError *, void*
- (void)getResetSyncStatusWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getSystemBudgetsWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)isReadyForAnalysisQuickCheckWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isReadyForAnalysisWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isReadyForCloudPhotoLibraryWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)keyForEmailAddress:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (NSProgress *)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScopeWithUUID:(void *)arg1 excludePersonUUIDs:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)markResourcesPurgeableWithUrgency:(void *)arg1 assetUuids:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)overrideSystemBudgetsForSyncSession:(void *)arg1 pauseReason:(void *)arg2 systemBudgets:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: bool, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)personInfoDictionaryForPersonID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)publishShareWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSError *, void*
- (void)queryUserIdentitiesWithEmails:(void *)arg1 phoneNumbers:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)rampingRequestForResourceType:(void *)arg1 numRequested:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)refreshLibraryScopeWithIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, NSError *, void*
- (void)removeParticipantsWithParticipantUUIDs:(void *)arg1 fromLibraryScopeWithIdentifier:(void *)arg2 retentionPolicy:(void *)arg3 exitSource:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestDeviceLibraryConfigurationChange:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, NSError *, void*
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCloudPhotoLibraryEnabledState:(bool)arg1;
- (void)setCloudPhotoLibraryPauseState:(bool)arg1 reason:(short)arg2;
- (void)setPersonInfoDictionary:(NSDictionary *)arg1 forPersonID:(NSString *)arg2;
- (void)sharedLibraryRampCheckWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)shouldAutoEnableiCPLOnOSXWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startExitFromLibraryScopeWithIdentifier:(void *)arg1 retentionPolicy:(void *)arg2 exitSource:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)syncCloudPhotoLibrary;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(NSString *)arg1;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
