
@interface LPKUserSwitchCycleController : NSObject {
    <LPKUserSwitchCycleResponder> * _delegate;
}

@property (nonatomic) <LPKUserSwitchCycleResponder> *delegate;

- (void).cxx_destruct;
- (void)_clearOutLocalPerfTestDefaults;
- (unsigned long long)_currentEnvironment;
- (void)_fixTestStatesForRetry;
- (bool)_isLoginSession;
- (void)_loginAccount:(id)arg1 password:(id)arg2 localLoginOnly:(bool)arg3 delay:(double)arg4;
- (void)_scheduleRetryWithTimeout:(double)arg1;
- (bool)_setUserSwitchDestinationExpectation:(unsigned long long)arg1;
- (void)_triggerFastLogoutWithDelay:(double)arg1;
- (void)_triggerFullLogoutWithDelay:(double)arg1;
- (void)_updateLocalPerfTestCycleCount:(long long)arg1;
- (bool)_validateUserSwitchExpectation;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)interruptLocalUserSwitchTest;
- (void)setDelegate:(id)arg1;
- (bool)startUserSwitchWithType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4;
- (bool)triggerTestUserSwitchIfNeeded;

@end
