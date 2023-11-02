
@interface HAP2AsynchronousOperation : NSOperation {
    HMFActivity * _activity;
    bool  _cancelled;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    HAP2PropertyLock * _propertyLock;
}

@property (nonatomic, readonly) HMFActivity *activity;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (getter=isFinished, nonatomic, readonly) bool finished;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (id)activity;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)error;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 activity:(id)arg2;
- (id)initWithName:(id)arg1 optionalActivity:(id)arg2;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)start;

@end
