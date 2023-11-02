
@protocol CoreTelephonyClientCarrierBundleDelegate <NSObject>

@optional

- (void)carrierBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)defaultBundleChange;
- (void)operatorBundleChange:(CTXPCServiceSubscriptionContext *)arg1;

@end