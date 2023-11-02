
@interface AAUICustodianRecoveryApprovalController : NSObject {
    bool  _isResetEligible;
    UIViewController * _presenter;
    NSString * _recoverySessionID;
}

@property (nonatomic) bool isResetEligible;

+ (id)approvalControllerWithPresenter:(id)arg1 recoverySessionID:(id)arg2;

- (void).cxx_destruct;
- (id)_actionsForRecoveryCodeAlert:(id)arg1 completion:(id /* block */)arg2;
- (void)_promptForRecoveryCodeWithCompletion:(id /* block */)arg1;
- (void)_validateRecoveryCode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (bool)isResetEligible;
- (void)setIsResetEligible:(bool)arg1;
- (void)validateRecoveryCodeWithCompletion:(id /* block */)arg1;

@end
