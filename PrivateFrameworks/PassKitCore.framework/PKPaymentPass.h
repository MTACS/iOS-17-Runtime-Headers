
@interface PKPaymentPass : PKSecureElementPass

@property (nonatomic, readonly) unsigned long long activationState;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (unsigned long long)activationState;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDevicePaymentApplicationForAID:(id)arg1;
- (bool)npkHasMultiplePaymentApplications;
- (bool)npkHasUserSelectableContactlessPaymentApplications;
- (bool)npkIsInActivatedState;
- (bool)npkIsInActivatingState;
- (bool)npkIsInLostMode;
- (bool)npkIsInSuspendedState;
- (id)npkPreferredContactlessPaymentApplication;
- (void)npkSetPreferredPaymentApplication:(id)arg1;
- (id)npkSortedDeviceContactlessPaymentApplications;

@end
