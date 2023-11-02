
@protocol PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate <NSObject>

@required

- (PKPaymentCouponCodeDataItem *)dataItemForPaymentAuthorizationCouponCodeEntryViewController:(PKPaymentAuthorizationCouponCodeEntryViewController *)arg1;
- (void)paymentAuthorizationCouponCodeEntryViewController:(PKPaymentAuthorizationCouponCodeEntryViewController *)arg1 didChangeCouponCode:(NSString *)arg2;
- (void)paymentAuthorizationCouponCodeEntryViewControllerDidFinish:(PKPaymentAuthorizationCouponCodeEntryViewController *)arg1;

@end
