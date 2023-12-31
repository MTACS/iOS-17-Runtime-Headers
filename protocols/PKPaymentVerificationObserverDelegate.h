
@protocol PKPaymentVerificationObserverDelegate <NSObject>

@required

- (void)verificationObserver:(PKPaymentVerificationObserver *)arg1 didObserveVerificationCode:(NSString *)arg2;
- (void)verificationObserverDidTimeout:(PKPaymentVerificationObserver *)arg1;

@end
