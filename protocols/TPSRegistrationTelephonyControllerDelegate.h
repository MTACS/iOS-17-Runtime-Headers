
@protocol TPSRegistrationTelephonyControllerDelegate <TPSTelephonyControllerDelegate>

@optional

- (void)networkSelectionInfoChangedForRegistrationController:(TPSRegistrationTelephonyController *)arg1;
- (void)networksChangedForRegistrationController:(TPSRegistrationTelephonyController *)arg1;
- (void)operatorNameChangedForRegistrationController:(TPSRegistrationTelephonyController *)arg1;

@end
