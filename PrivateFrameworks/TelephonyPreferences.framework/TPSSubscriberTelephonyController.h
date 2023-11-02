
@interface TPSSubscriberTelephonyController : TPSTelephonyController <CoreTelephonyClientSubscriberDelegate> {
    bool  _SIMPasscodeLockEnabled;
    long long  _SIMPasscodeRemainingAttempts;
    NSString * _SIMStatus;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (getter=isSIMPasscodeLockEnabled, nonatomic) bool SIMPasscodeLockEnabled;
@property (nonatomic) long long SIMPasscodeRemainingAttempts;
@property (nonatomic, copy) NSString *SIMStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)SIMPasscodeRemainingAttempts;
- (id)SIMStatus;
- (void)changePIN:(id)arg1 newPin:(id)arg2;
- (void)changePIN:(id)arg1 newPin:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchSIMPasscodeLockEnabled;
- (void)fetchSIMPasscodeLockEnabledWithCompletion:(id /* block */)arg1;
- (void)fetchSIMPasscodeRemainingAttempts;
- (void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(id /* block */)arg1;
- (void)fetchSIMStatus;
- (void)fetchSIMStatusWithCompletion:(id /* block */)arg1;
- (id)getSIMPasscodeLockEnabledValue;
- (id)getSIMPasscodeLockEnabledValueWithError:(id*)arg1;
- (id)getSIMPasscodeRemainingAttemptsValue;
- (id)getSIMPasscodeRemainingAttemptsValueWithError:(id*)arg1;
- (id)getSIMStatus;
- (id)getSIMStatusWithError:(id*)arg1;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isSIMPasscodeLockEnabled;
- (void)presentSIMPasscodeAlert;
- (void)setSIMLockEnabled:(bool)arg1 pin:(id)arg2;
- (void)setSIMLockEnabled:(bool)arg1 pin:(id)arg2 completion:(id /* block */)arg3;
- (void)setSIMPasscodeLockEnabled:(bool)arg1;
- (void)setSIMPasscodeRemainingAttempts:(long long)arg1;
- (void)setSIMStatus:(id)arg1;
- (void)simLockSaveRequestDidComplete:(id)arg1 success:(bool)arg2;
- (void)simPinChangeRequestDidComplete:(id)arg1 success:(bool)arg2;
- (void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
- (void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)subscriptionContext;

@end
