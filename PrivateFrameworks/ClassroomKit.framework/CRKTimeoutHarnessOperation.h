
@interface CRKTimeoutHarnessOperation : CATOperation {
    CATOperation * _operation;
    <CRKOperationQueue> * _operationQueue;
    double  _timeout;
    <CRKCancelable> * _timeoutTimer;
    NSString * _timerIdentifier;
    <CRKTimerPrimitives> * _timerPrimitives;
}

@property (nonatomic, readonly) CATOperation *operation;
@property (nonatomic, readonly) <CRKOperationQueue> *operationQueue;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, retain) <CRKCancelable> *timeoutTimer;
@property (nonatomic, readonly, copy) NSString *timerIdentifier;
@property (nonatomic, readonly) <CRKTimerPrimitives> *timerPrimitives;

+ (id)timeoutTimerIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (void)dependentOperationDidFinish:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 operation:(id)arg2 timout:(double)arg3;
- (id)initWithTimerPrimitives:(id)arg1 operationQueue:(id)arg2 operation:(id)arg3 timerIdentifier:(id)arg4 timeout:(double)arg5;
- (bool)isAsynchronous;
- (void)main;
- (id)operation;
- (id)operationQueue;
- (void)run;
- (void)setTimeoutTimer:(id)arg1;
- (double)timeout;
- (void)timeoutDidFire;
- (id)timeoutTimer;
- (id)timerIdentifier;
- (id)timerPrimitives;

@end
