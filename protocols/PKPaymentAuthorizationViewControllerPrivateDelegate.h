
@protocol PKPaymentAuthorizationViewControllerPrivateDelegate <NSObject>

@required

- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 willFinishWithError:(NSError *)arg2;

@optional

- (void)paymentAuthorizationCoordinator:(void *)arg1 didAuthorizeApplePayTrustSignature:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKApplePayTrustSignature *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didUpdateAccountServicePaymentMethod:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: PKPaymentAuthorizationCoordinator *, PKAccountServicePaymentMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentRequestPaymentMethodUpdate *, PKApplePayTrustSignatureRequest *, void*
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationViewController:(void *)arg1 didRequestMerchantSession:(void *)arg2; // needs 2 arg types, found 8: PKPaymentAuthorizationViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentMerchantSession *, NSError *, void*

@end
