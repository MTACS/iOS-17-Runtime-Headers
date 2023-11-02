
@interface MLTask : NSObject {
    NSError * _error;
    long long  _state;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSString * _taskIdentifier;
}

@property (copy) NSError *error;
@property long long state;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly, copy) NSString *taskIdentifier;

- (void).cxx_destruct;
- (bool)_canCancel;
- (bool)_canComplete;
- (bool)_canFail;
- (bool)_canResume;
- (bool)_canSuspend;
- (void)_resumeWithTaskContext:(id)arg1;
- (void)cancel;
- (void)completeWithTaskContext:(id)arg1;
- (id)error;
- (void)failWithError:(id)arg1 taskContext:(id)arg2;
- (id)initWithState:(long long)arg1;
- (void)resume;
- (void)resumeWithTaskContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)suspendWithTaskContext:(id)arg1;
- (id)syncQueue;
- (id)taskIdentifier;
- (id)taskStatesToString:(long long)arg1;

@end
