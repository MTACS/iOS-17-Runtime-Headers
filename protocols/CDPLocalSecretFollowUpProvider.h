
@protocol CDPLocalSecretFollowUpProvider <NSObject>

@required

- (void)deleteConfirmExistingSecretFollowUp;
- (void)deleteCreatePasscodeFollowUp;
- (void)deleteLocalSecretChangeFollowUp;
- (void)postConfirmExistingSecretFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
