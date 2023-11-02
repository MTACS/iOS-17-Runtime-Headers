
@interface BFFFinishSetupFaceIDController : BFFFinishSetupBiometricAndPasscodeController {
    BFFFinishSetupFaceIDViewController * _viewController;
}

+ (id)finishSetupFaceIDController;

- (void).cxx_destruct;
- (id)createViewControllerWithPasscode:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;

@end
