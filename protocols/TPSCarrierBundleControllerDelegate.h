
@protocol TPSCarrierBundleControllerDelegate <TPSTelephonyControllerDelegate>

@optional

- (void)carrierBundleController:(TPSCarrierBundleController *)arg1 carrierBundleDidChangeForSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg2;
- (void)carrierBundleController:(TPSCarrierBundleController *)arg1 operatorBundleDidChangeForSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg2;

@end
