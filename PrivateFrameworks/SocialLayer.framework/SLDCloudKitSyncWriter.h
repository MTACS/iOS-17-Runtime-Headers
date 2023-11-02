
@interface SLDCloudKitSyncWriter : SLDCloudKitSyncBase {
    bool  _appChangesCheckScheduled;
    bool  _freshHighlightsGenerated;
    NSObject<OS_dispatch_source> * _invalidateHighlightsCoalescingTimer;
    NSMutableDictionary * _recordsToUpload;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_batchNumberOfRecordIDString:(id)arg1;
- (bool)_didHandleSyncError:(id)arg1 retryBlock:(id /* block */)arg2;
- (id)_idForRecordIDString:(id)arg1;
- (id)_recordIDsFromStrings:(id)arg1;
- (void)_savedRecord:(id)arg1;
- (void)accountStatusChanged;
- (void)checkForAppChanges;
- (void)checkForAppChangesNow;
- (void)dealloc;
- (void)fetchAndProcessFreshHighlights;
- (void)handleMetadataSizeBecomingEligibleForSync;
- (void)initializeState;
- (void)invalidateHighlights;
- (void)invalidateHighlightsInternal;
- (void)nextTask;
- (id)recordIDStringOfSavedIDString:(id)arg1;
- (id)recordZoneID;
- (void)reset;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToFetchChangesForRecordZoneID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;
- (unsigned long long)versionOfSavedIDString:(id)arg1;

@end
