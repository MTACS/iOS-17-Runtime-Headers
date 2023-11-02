
@protocol ACMiTunesSignInDialogProtocol <ACMSignInDialogProtocol>

@required

- (NSString *)alertViewPrompt;
- (bool)isUserNameEditable;
- (void)setAlertViewPrompt:(NSString *)arg1;
- (void)setIsUserNameEditable:(bool)arg1;

@end
