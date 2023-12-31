
@protocol PKPaymentAuthorizationViewControllerDelegate <NSObject>

@required

- (void)paymentAuthorizationViewControllerDidFinish:(PKPaymentAuthorizationViewController *)arg1;

@optional

- (void)paymentAuthorizationViewController:(void *)arg1 didAuthorizePayment:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didAuthorizePayment:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didChangeCouponCode:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestCouponCodeUpdate *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didRequestMerchantSessionUpdate:(void *)arg2; // needs 2 arg types, found 7: PKPaymentAuthorizationViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestMerchantSessionUpdate *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectPaymentMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, PKPaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectPaymentMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, PKPaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestPaymentMethodUpdate *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectShippingAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PKPaymentAuthorizationViewController *, void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, NSArray *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectShippingContact:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PKPaymentAuthorizationViewController *, PKContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, NSArray *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectShippingContact:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, PKContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestShippingContactUpdate *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectShippingMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentAuthorizationViewController *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, void*
- (void)paymentAuthorizationViewController:(void *)arg1 didSelectShippingMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationViewController *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestShippingMethodUpdate *, void*
- (void)paymentAuthorizationViewControllerWillAuthorizePayment:(PKPaymentAuthorizationViewController *)arg1;

@end
