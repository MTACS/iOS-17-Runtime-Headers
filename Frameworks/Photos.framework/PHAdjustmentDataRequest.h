
@interface PHAdjustmentDataRequest : PHMediaRequest {
    <PHAdjustmentDataRequestDelegate> * _adjustmentDataDelegate;
    PHAdjustmentDataResult * _adjustmentDataResult;
    PHAdjustmentDataRequestBehaviorSpec * _behaviorSpec;
    PLCPLDownloadContext * _legacyDownloadContext;
    NSObject<OS_dispatch_semaphore> * _syncDownloadWaitSemaphore;
}

@property (nonatomic, readonly) <PHAdjustmentDataRequestDelegate> *adjustmentDataDelegate;
@property (nonatomic, readonly) PHAdjustmentDataRequestBehaviorSpec *behaviorSpec;

- (void).cxx_destruct;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (void)_finishFromAsynchronousCallback;
- (id)adjustmentDataDelegate;
- (id)behaviorSpec;
- (void)cancel;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 behaviorSpec:(id)arg6 delegate:(id)arg7;
- (bool)isSynchronous;
- (void)startRequest;

@end
