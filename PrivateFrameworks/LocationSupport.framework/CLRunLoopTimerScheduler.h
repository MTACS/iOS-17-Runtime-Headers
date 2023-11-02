
@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler> {
    id /* block */  _fireBlock;
    NSRunLoop * _runloop;
    CLTimer * _timer;
    NSTimer * _underlyingTimer;
}

@property (nonatomic, copy) id /* block */ fireBlock;
@property (nonatomic, retain) NSRunLoop *runloop;
@property (nonatomic) CLTimer *timer;
@property (nonatomic, retain) NSTimer *underlyingTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)fireBlock;
- (id)initWithRunLoopSilo:(id)arg1;
- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
- (id)runloop;
- (void)setFireBlock:(id /* block */)arg1;
- (void)setRunloop:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUnderlyingTimer:(id)arg1;
- (id)timer;
- (id)underlyingTimer;

@end
