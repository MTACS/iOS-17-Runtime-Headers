
@interface IMDCKAbstractSyncController : NSObject {
    <IMDCKAbstractSyncControllerDelegate> * _delegate;
    bool  _isSyncing;
    unsigned long long  _recordsRead;
    unsigned long long  _recordsWriteFailed;
    unsigned long long  _recordsWritten;
}

@property <IMDCKAbstractSyncControllerDelegate> *delegate;
@property (nonatomic) bool isSyncing;
@property (nonatomic) unsigned long long recordsRead;
@property (nonatomic) unsigned long long recordsWriteFailed;
@property (nonatomic) unsigned long long recordsWritten;
@property (nonatomic, readonly) IMDCKSyncState *syncState;

- (void).cxx_destruct;
- (bool)_fetchedAllChangesFromCloudKit;
- (id)_syncTokenKey;
- (id)_syncTokenStore;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)ckUtilities;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)countRecordOnRead:(bool)arg1 didSucceed:(bool)arg2;
- (id)delegate;
- (void)deleteSyncToken;
- (id)describeRecordCounts;
- (id)errorAnalyzer;
- (bool)isSyncing;
- (id)latestSyncToken;
- (id)recordStore;
- (unsigned long long)recordsRead;
- (unsigned long long)recordsWriteFailed;
- (unsigned long long)recordsWritten;
- (void)resetRecordCounts;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToUploading;
- (void)setDelegate:(id)arg1;
- (void)setIsSyncing:(bool)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setRecordsRead:(unsigned long long)arg1;
- (void)setRecordsWriteFailed:(unsigned long long)arg1;
- (void)setRecordsWritten:(unsigned long long)arg1;
- (void)syncBatchCompleted:(unsigned long long)arg1;
- (long long)syncControllerRecordType;
- (id)syncState;
- (id)syncStateDebuggingInfo:(id)arg1;

@end
