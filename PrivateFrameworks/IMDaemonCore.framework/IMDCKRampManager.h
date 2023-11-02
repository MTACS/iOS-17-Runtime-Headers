
@interface IMDCKRampManager : NSObject {
    NSObject<OS_dispatch_queue> * _ckQueue;
    NSTimer * _retryTimer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) NSTimer *retryTimer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_CKUtilitiesSharedInstance;
- (void)_fetchLatestRampStateFromCK:(id /* block */)arg1;
- (void)_performRampCheckWithRetryAfter:(double)arg1 recordFetchedCompletionBlock:(id /* block */)arg2;
- (void)_persistRampFetchServerError:(bool)arg1;
- (id)_rampUpRecordID;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldSendPriorityRequest;
- (void)_writeRampStateAllowed:(bool)arg1 promoted:(bool)arg2 visible:(bool)arg3 fetchHadServerError:(bool)arg4;
- (void)cachedRampState:(id /* block */)arg1;
- (id)ckQueue;
- (void)dealloc;
- (void)fetchLatestRampStateFromCK:(id /* block */)arg1;
- (id)init;
- (id)retryTimer;
- (void)setRetryTimer:(id)arg1;

@end
