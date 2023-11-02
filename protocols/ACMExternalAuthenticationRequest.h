
@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>

@required

- (NSString *)alertViewPrompt;
- (bool)automaticallyCancelWhenSwitchingToBackground;
- (bool)canUseTouchID;
- (void)setAlertViewPrompt:(NSString *)arg1;
- (void)setAutomaticallyCancelWhenSwitchingToBackground:(bool)arg1;
- (void)setCanUseTouchID:(bool)arg1;
- (void)setUseAlertView:(bool)arg1;
- (void)setUserNameFieldEditable:(bool)arg1;
- (bool)useAlertView;
- (bool)userNameFieldEditable;

@end
