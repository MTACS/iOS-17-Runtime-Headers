
@interface SSObservable : NSObject {
    NSError * _failureError;
    NSString * _logKey;
    NSMutableArray * _observers;
    NSMutableArray * _queuedResults;
    NSObject<OS_dispatch_queue> * _sendMessageQueue;
    NSConditionLock * _stateLock;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, retain) NSError *failureError;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic, retain) NSMutableArray *queuedResults;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (nonatomic, retain) NSConditionLock *stateLock;

+ (bool)_errorIsCanceledError:(id)arg1;
+ (id)observableWithObserver:(id)arg1;
+ (id)observableWithObservers:(id)arg1;

- (void).cxx_destruct;
- (bool)_isComplete;
- (bool)cancel;
- (id)failureError;
- (id)init;
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

@end
