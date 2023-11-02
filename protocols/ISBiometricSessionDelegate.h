
@protocol ISBiometricSessionDelegate <NSObject>

@optional

- (void)sender:(id)arg1 didFallbackToPassword:(bool)arg2;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(bool)arg2;
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3 andPaymentTokenData:(NSData *)arg4 andFpanID:(NSString *)arg5 isExtendedAction:(bool)arg6 isPayment:(bool)arg7 additionalHeaders:(NSDictionary *)arg8;

@end
