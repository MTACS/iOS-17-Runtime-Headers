
@protocol _HKDeepBreathingSessionServer <NSObject>

@required

- (void)remote_endSessionWithEndReason:(long long)arg1;
- (void)remote_startGuiding;
- (void)remote_startSessionWithStartDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
