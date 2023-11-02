
@interface NoOpErrorAnalyzer : NSObject <SyncErrorAnalyzing>

- (long long)responseForError:(id)arg1 attempt:(long long)arg2 retryInterval:(id*)arg3;
- (bool)wasAssetNotAvailable:(id)arg1;
- (bool)wasBatchFailure:(id)arg1;
- (bool)wasOutOfSyncConditionsInError:(id)arg1;
- (bool)wasQuotaExceededInError:(id)arg1;
- (bool)wasRecordAlreadyChanged:(id)arg1;
- (bool)wasRecordAlreadySaved:(id)arg1;
- (bool)wasRecordArchived:(id)arg1;
- (bool)wasTokenExpired:(id)arg1;
- (bool)wasUnknownItem:(id)arg1;
- (bool)wasZoneDeletedByUserInError:(id)arg1;
- (bool)wasZoneNotCreated:(id)arg1;
- (bool)wasZoneNotFound:(id)arg1;

@end
