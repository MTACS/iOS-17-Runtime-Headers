
@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject <DevicePINControllerDelegate> {
    id /* block */  _devicePasscodeVerificationCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ devicePasscodeVerificationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deleteAccountGroupFooterText;
+ (id)labelTextForAccountSummaryCell;
+ (id)titleForAccountSummaryGroup;
+ (id)warningTextForAccountDeletion;

- (void).cxx_destruct;
- (void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)devicePasscodeVerificationCompletionHandler;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDevicePasscodeVerificationCompletionHandler:(id /* block */)arg1;

@end
