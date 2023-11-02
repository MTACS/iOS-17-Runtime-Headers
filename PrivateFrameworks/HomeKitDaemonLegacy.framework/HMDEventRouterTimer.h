
@interface HMDEventRouterTimer : NSObject <HMETimer, HMFTimerDelegate> {
    HMFTimer * _timer;
    id /* block */  _timerFireHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeInterval;
@property (readonly) HMFTimer *timer;
@property (readonly) id /* block */ timerFireHandler;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 interval:(double)arg2 timerFireHandler:(id /* block */)arg3;
- (void)resume;
- (void)suspend;
- (double)timeInterval;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFireHandler;

@end
