
@interface SBSoftwareUpdatePasscodePolicyManager : NSObject <SBSoftLockoutControllerDelegate> {
    SBFMobileKeyBag * _mobileKeyBag;
    bool  _passcodeAuthenticationSuccessPending;
    SBSoftLockoutController * _softLockoutController;
    long long  _softwareUpdatePasscodePolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long softwareUpdatePasscodePolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_authRequestCompleted:(id)arg1;
- (long long)_effectiveSoftwareUpdatePasscodePolicy;
- (bool)consumePendingUnlock;
- (void)dealloc;
- (id)init;
- (id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2;
- (void)noteAuthenticationSucceededWithPasscode:(id)arg1;
- (bool)requiresLockout;
- (void)setSoftwareUpdatePasscodePolicy:(long long)arg1;
- (long long)softwareUpdatePasscodePolicy;

@end
