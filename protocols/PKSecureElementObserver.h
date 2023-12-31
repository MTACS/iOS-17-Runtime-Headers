
@protocol PKSecureElementObserver <NSObject>

@optional

- (void)secureElement:(PKSecureElement *)arg1 deletionOfAppletsDidFinishWithSuccess:(bool)arg2;
- (void)secureElement:(PKSecureElement *)arg1 deletionOfAppletsDidUpdateToProgress:(double)arg2;
- (void)secureElementDidEnterRestrictedMode:(PKSecureElement *)arg1;
- (void)secureElementDidLeaveRestrictedMode:(PKSecureElement *)arg1;
- (void)secureElementPairingDidChangeForReason:(unsigned long long)arg1;

@end
