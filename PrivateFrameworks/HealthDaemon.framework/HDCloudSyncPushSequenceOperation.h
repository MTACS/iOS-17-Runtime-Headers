
@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSyncSessionDelegate, HDSynchronousTaskGroupDelegate> {
    NSMutableArray * _changeRecordsPendingPush;
    bool  _hasMadeForwardProgress;
    bool  _isPerformingRecentRecordRoll;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _recordsPendingDeletion;
    HDCloudSyncSequenceRecord * _sequenceRecord;
    HDCloudSyncSequenceState * _sequenceState;
    HDCloudSyncSessionContext * _sessionContext;
    bool  _shouldClearRebaselineDeadline;
    NSObject<OS_dispatch_queue> * _syncQueue;
    HDCloudSyncTarget * _target;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMadeForwardProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCloudSyncSequenceState *sequenceState;
@property (readonly) Class superclass;

+ (id)operationTagDependencies;
+ (bool)shouldLogAtOperationStart;
+ (bool)shouldPerformRecentRecordRollingForUnfrozenRecords:(id)arg1 configuration:(id)arg2;
+ (id)unfrozenChangeRecordsForPushTarget:(id)arg1 sequenceRecord:(id)arg2 configuration:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)hasMadeForwardProgress;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4;
- (void)main;
- (id)sequenceState;
- (void)setSequenceState:(id)arg1;
- (bool)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(bool)arg2 error:(id)arg3;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 willSyncAnchorRanges:(id)arg2;
- (void)syncSessionWillBegin:(id)arg1;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
