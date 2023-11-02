
@interface BRCFSDownloaderBatchEnumerator : NSObject {
    NSMutableSet * _enumeratedThrottleIds;
    long long  _now;
    long long * _retryQueueKick;
    PQLResultSet * _rs;
    BRCSyncContext * _syncContext;
}

@property (nonatomic, readonly) BRCSyncContext *syncContext;

- (void).cxx_destruct;
- (void)close;
- (long long)completedUnitCount;
- (id)etag;
- (id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long*)arg4;
- (id)nextDocumentItem;
- (id)stageID;
- (id)syncContext;

@end
