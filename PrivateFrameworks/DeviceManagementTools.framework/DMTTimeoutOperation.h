
@interface DMTTimeoutOperation : CATOperation {
    bool  _cancelsOnTimeout;
    CATOperation * _observedOperation;
    double  _timeoutInterval;
    NSTimer * _timeoutTimer;
}

@property (nonatomic, readonly) bool cancelsOnTimeout;
@property (nonatomic, readonly) CATOperation *observedOperation;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, retain) NSTimer *timeoutTimer;

- (void).cxx_destruct;
- (void)beginWaitingForOperation;
- (void)cancel;
- (bool)cancelsOnTimeout;
- (void)createTimer;
- (id)initWithOperation:(id)arg1 timeout:(double)arg2 cancelsOnTimeout:(bool)arg3;
- (void)innerOperationDidFinish:(id)arg1;
- (bool)isAsynchronous;
- (void)main;
- (id)observedOperation;
- (void)setTimeoutTimer:(id)arg1;
- (double)timeoutInterval;
- (id)timeoutTimer;
- (void)timerDidFire:(id)arg1;

@end
