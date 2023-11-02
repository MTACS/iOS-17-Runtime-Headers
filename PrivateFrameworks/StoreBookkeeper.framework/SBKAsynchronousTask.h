
@interface SBKAsynchronousTask : NSObject {
    int  _cancelType;
    NSMutableArray * _completions;
    NSString * _debugDescription;
    NSError * _error;
    id /* block */  _expirationHandler;
    id /* block */  _finishedHandler;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSObject<OS_dispatch_queue> * _queue;
    id  _result;
    MSVTaskAssertion * _taskAssertion;
    bool  _taskInvalidationDisabled;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic) int cancelType;
@property (nonatomic, retain) NSMutableArray *completions;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) id /* block */ expirationHandler;
@property (nonatomic, copy) id /* block */ finishedHandler;
@property (nonatomic, retain) id result;
@property (nonatomic, retain) MSVTaskAssertion *taskAssertion;

- (void).cxx_destruct;
- (void)_invalidateAssertion:(bool)arg1;
- (void)_invalidateTimer;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)addTaskCompletionBlock:(id /* block */)arg1;
- (void)beginTaskOperation;
- (int)cancelType;
- (id)completions;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)endTaskOperation;
- (id)error;
- (id /* block */)expirationHandler;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;
- (id /* block */)finishedHandler;
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;
- (void)invalidate;
- (void)invokeTaskCompletionBlocksWithBlock:(id /* block */)arg1;
- (id)result;
- (void)setCancelType:(int)arg1;
- (void)setCompletions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpirationHandler:(id /* block */)arg1;
- (void)setFinishedHandler:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)setTaskAssertion:(id)arg1;
- (id)taskAssertion;

@end
