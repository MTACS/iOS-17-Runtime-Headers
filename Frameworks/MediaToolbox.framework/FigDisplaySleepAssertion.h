
@interface FigDisplaySleepAssertion : NSObject {
    <BSInvalidatable> * _idleTimerAssertion;
    long long  _lastIdleTimerResetTime;
    NSString * _reason;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)dealloc;
- (id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(id /* block */)arg3;
- (unsigned char)resetIdleTimer;

@end
