
@interface HMDEventRouterTimerProvider : NSObject <HMETimerProvider>

- (id)currentDate;
- (id)dateWithTimeIntervalSinceNow:(double)arg1;
- (id)timerWithQueue:(id)arg1 interval:(double)arg2 timerFireHandler:(id /* block */)arg3;

@end
