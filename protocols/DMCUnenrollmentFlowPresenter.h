
@protocol DMCUnenrollmentFlowPresenter <NSObject>

@optional

- (void)dismissUnenrollmentScene;
- (void)presentActivityPageForAppleMAID:(bool)arg1;
- (void)requestDevicePasscodeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)requestUserConfirmationIsAppleMAID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
