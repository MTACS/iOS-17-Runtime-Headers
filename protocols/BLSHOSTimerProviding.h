
@protocol BLSHOSTimerProviding <NSObject>

@required

- (NSDate *)dateWithTimeIntervalSinceNow:(double)arg1;
- (void)dispatchToMainQueueAfterSecondsDelay:(void *)arg1 identifier:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (unsigned long long)mach_continuous_time;
- (NSDate *)now;
- (<BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *)scheduledTimerWithIdentifier:(void *)arg1 interval:(void *)arg2 leewayInterval:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: NSString *, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *, void*
- (<BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *)scheduledWakingTimerWithIdentifier:(void *)arg1 interval:(void *)arg2 leewayInterval:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: NSString *, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *, void*

@end
