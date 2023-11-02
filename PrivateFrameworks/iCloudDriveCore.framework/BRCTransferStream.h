
@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable> {
    bool  _hasReachedCap;
    NSMutableDictionary * _inFlightOpByID;
    unsigned long long  _inFlightSize;
    bool  _isCancelled;
    bool  _isWaitingForTransferBatch;
    unsigned long long  _maxCountOfBatchesInFlight;
    long long  _minSignalTime;
    _Atomic int  _multipleItemsInteractiveSchedulingCount;
    BRCDeadlineSource * _schedulingSource;
    BRCAccountSession * _session;
    id /* block */  _streamDidBecomeReadyToTransferRecords;
    BRCSyncContext * _syncContext;
    NSObject<OS_dispatch_group> * _transferBatchRequestWaiter;
    NSObject<OS_dispatch_workloop> * _transferWorkloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long inFlightSize;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) NSArray *operations;
@property (nonatomic, copy) id /* block */ streamDidBecomeReadyToTransferRecords;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBatchOperation:(id)arg1;
- (void)_evaluateCap;
- (void)_schedule;
- (void)_scheduleOneBatchWithQoS:(long long)arg1;
- (void)_setReachedCap:(bool)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)addBatchOperation:(id)arg1;
- (void)cancel;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)close;
- (void)endSchedulingMultipleItemsInteractively;
- (void)forceSchedulingPendingInteractiveTransfers;
- (unsigned long long)inFlightSize;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3 maxCountOfBatchesInFlight:(unsigned long long)arg4;
- (bool)isCancelled;
- (id)operations;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)resume;
- (void)setStreamDidBecomeReadyToTransferRecords:(id /* block */)arg1;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)startSchedulingMultipleItemsInteractively;
- (id /* block */)streamDidBecomeReadyToTransferRecords;
- (void)suspend;

@end
