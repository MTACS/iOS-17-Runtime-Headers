
@interface BLSHBacklightOSTimerProvider : NSObject <BLSHOSTimerProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mach_continuous_time;
@property (nonatomic, readonly) NSDate *now;
@property (readonly) Class superclass;

- (id)dateWithTimeIntervalSinceNow:(double)arg1;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)arg1 identifier:(id)arg2 block:(id /* block */)arg3;
- (unsigned long long)mach_continuous_time;
- (id)now;
- (id)scheduledTimerWithIdentifier:(id)arg1 interval:(double)arg2 leewayInterval:(double)arg3 handler:(id /* block */)arg4;
- (id)scheduledWakingTimerWithIdentifier:(id)arg1 interval:(double)arg2 leewayInterval:(double)arg3 handler:(id /* block */)arg4;

@end
