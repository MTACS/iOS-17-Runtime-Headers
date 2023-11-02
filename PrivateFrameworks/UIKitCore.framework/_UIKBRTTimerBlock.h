
@interface _UIKBRTTimerBlock : NSObject {
    id /* block */  _onTimer;
    id  _owner;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _selfQueue;
    NSTimer * _timer;
}

@property (nonatomic, readonly, copy) id /* block */ onTimer;
@property (nonatomic, readonly) id owner;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *selfQueue;
@property (nonatomic, readonly) NSTimer *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fireNow;
- (id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(id /* block */)arg3 owner:(id)arg4;
- (void)invalidate;
- (id /* block */)onTimer;
- (id)owner;
- (id)queue;
- (id)selfQueue;
- (id)timer;
- (void)timerFired:(id)arg1;

@end
