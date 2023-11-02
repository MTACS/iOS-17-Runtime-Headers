
@protocol ACMExternalAppleConnect <NSObject>

@required

- (void)authenticate:(id <ACMBaseAuthenticationRequest>)arg1;
- (void)cancelRequests;
- (<ACMExternalAppleConnectDelegate><ACMAppleConnectTicketVerificationDelegate> *)delegate;
- (NSError *)hideAppleConnectSignInDialog;
- (long long)logLevel;
- (void)setDelegate:(id <ACMExternalAppleConnectDelegate><ACMAppleConnectTicketVerificationDelegate>)arg1;
- (void)setLogLevel:(long long)arg1;
- (void)verifyServiceTicket:(id <ACMTicketVerificationRequest>)arg1;

@end
