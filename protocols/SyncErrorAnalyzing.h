
@protocol SyncErrorAnalyzing

@required

- (long long)responseForError:(NSError *)arg1 attempt:(long long)arg2 retryInterval:(id*)arg3;
- (bool)wasAssetNotAvailable:(NSError *)arg1;
- (bool)wasBatchFailure:(NSError *)arg1;
- (bool)wasOutOfSyncConditionsInError:(NSError *)arg1;
- (bool)wasQuotaExceededInError:(NSError *)arg1;
- (bool)wasRecordAlreadyChanged:(NSError *)arg1;
- (bool)wasRecordAlreadySaved:(NSError *)arg1;
- (bool)wasRecordArchived:(NSError *)arg1;
- (bool)wasTokenExpired:(NSError *)arg1;
- (bool)wasUnknownItem:(NSError *)arg1;
- (bool)wasZoneDeletedByUserInError:(NSError *)arg1;
- (bool)wasZoneNotCreated:(NSError *)arg1;
- (bool)wasZoneNotFound:(NSError *)arg1;

@end
