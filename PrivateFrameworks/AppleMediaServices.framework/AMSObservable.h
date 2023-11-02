
@interface AMSObservable : NSObject {
    unsigned long long  _behavior;
    NSError * _failureError;
    NSString * _logKey;
    NSMutableArray * _observers;
    NSMutableArray * _queuedResults;
    NSObject<OS_dispatch_queue> * _sendMessageQueue;
    NSConditionLock * _stateLock;
}

@property (nonatomic, readonly) unsigned long long behavior;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, retain) NSError *failureError;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic, retain) NSMutableArray *queuedResults;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (nonatomic, retain) NSConditionLock *stateLock;

- (void).cxx_destruct;
- (bool)_isComplete;
- (unsigned long long)behavior;
- (bool)cancel;
- (id)failureError;
- (id)init;
- (id)initWithNotification:(id)arg1 object:(id)arg2;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2;
- (id)initWithObservers:(id)arg1;
- (id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2;
- (bool)isCancelled;
- (bool)isComplete;
- (id)logKey;
- (id)observers;
- (id)queuedResults;
- (bool)sendCompletion;
- (bool)sendFailure:(id)arg1;
- (id)sendMessageQueue;
- (bool)sendResult:(id)arg1;
- (void)setFailureError:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueuedResults:(id)arg1;
- (void)setSendMessageQueue:(id)arg1;
- (void)setStateLock:(id)arg1;
- (id)stateLock;
- (void)subscribe:(id)arg1;
- (id)subscribeWithResultBlock:(id /* block */)arg1;
- (void)unsubscribe:(id)arg1;
- (void)unsubscribeAll;

@end
