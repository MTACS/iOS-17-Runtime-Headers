
@interface SBiCloudPasscodeRequirementLockoutController : NSObject <SBSoftLockoutControllerDelegate> {
    SBSoftLockoutController * _lockOutController;
    SBFMobileKeyBag * _mobileKeybag;
    bool  _providedPasscode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool desiresPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_deviceHasComplexPasscode;
- (void)dealloc;
- (bool)desiresPasscode;
- (id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2;
- (void)noteAuthenticationSucceededWithPasscode:(id)arg1;
- (bool)requiresLockout;

@end
