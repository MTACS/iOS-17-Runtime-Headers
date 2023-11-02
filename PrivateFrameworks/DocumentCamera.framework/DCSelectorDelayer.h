
@interface DCSelectorDelayer : NSObject {
    bool  _callOnMainThread;
    double  _delay;
    id /* block */  _fireBlock;
    NSObject<OS_dispatch_queue> * _requestQueue;
    SEL  _selector;
    id  _target;
    bool  _waitToFireUntilRequestsStop;
}

@property (nonatomic) bool callOnMainThread;
@property double delay;
@property (nonatomic, copy) id /* block */ fireBlock;
@property (nonatomic, readonly) bool isScheduledToFire;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;
@property (nonatomic) bool waitToFireUntilRequestsStop;

- (void).cxx_destruct;
- (void)_cancelFireRequests;
- (bool)callOnMainThread;
- (void)callTargetSelector;
- (void)cancelPreviousFireRequests;
- (void)dealloc;
- (double)delay;
- (id /* block */)fireBlock;
- (void)fireImmediately;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(bool)arg4 callOnMainThread:(bool)arg5;
- (bool)isScheduledToFire;
- (void)requestFire;
- (id)requestQueue;
- (SEL)selector;
- (void)setCallOnMainThread:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setFireBlock:(id /* block */)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setWaitToFireUntilRequestsStop:(bool)arg1;
- (id)target;
- (bool)waitToFireUntilRequestsStop;

@end
