
@protocol PKPaymentAuthorizationControllerDelegate <NSObject>

@required

- (void)paymentAuthorizationControllerDidFinish:(PKPaymentAuthorizationController *)arg1;

@optional

- (void)paymentAuthorizationController:(void *)arg1 didAuthorizePayment:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)paymentAuthorizationController:(void *)arg1 didAuthorizePayment:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationController:(void *)arg1 didChangeCouponCode:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestCouponCodeUpdate *, void*
- (void)paymentAuthorizationController:(void *)arg1 didRequestMerchantSessionUpdate:(void *)arg2; // needs 2 arg types, found 7: PKPaymentAuthorizationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestMerchantSessionUpdate *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectPaymentMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKPaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectPaymentMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKPaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestPaymentMethodUpdate *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectShippingContact:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PKPaymentAuthorizationController *, PKContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, NSArray *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectShippingContact:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestShippingContactUpdate *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectShippingMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentAuthorizationController *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectShippingMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestShippingMethodUpdate *, void*
- (void)paymentAuthorizationControllerWillAuthorizePayment:(PKPaymentAuthorizationController *)arg1;
- (UIWindow *)presentationWindowForPaymentAuthorizationController:(PKPaymentAuthorizationController *)arg1;

@end
