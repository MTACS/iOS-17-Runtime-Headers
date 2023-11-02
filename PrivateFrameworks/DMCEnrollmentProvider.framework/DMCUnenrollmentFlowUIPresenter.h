
@interface DMCUnenrollmentFlowUIPresenter : DMCEnrollmentFlowUIPresenterBase <DMCUnenrollmentFlowPresenter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dismissUnenrollmentScene;
- (void)presentActivityPageForAppleMAID:(bool)arg1;
- (void)requestDevicePasscodeWithCompletionHandler:(id /* block */)arg1;
- (void)requestUserConfirmationIsAppleMAID:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
