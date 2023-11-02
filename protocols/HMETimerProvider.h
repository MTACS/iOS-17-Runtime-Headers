
@protocol HMETimerProvider

@required

- (NSDate *)currentDate;
- (NSDate *)dateWithTimeIntervalSinceNow:(double)arg1;
- (<HMETimer> *)timerWithQueue:(void *)arg1 interval:(void *)arg2 timerFireHandler:(void *)arg3; // needs 3 arg types, found 7: NSObject<OS_dispatch_queue> *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
