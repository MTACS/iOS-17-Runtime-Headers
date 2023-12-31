
@protocol PKRemoteAddPassViewControllerProtocol <NSObject>

@required

- (void)didFinishWithPass:(PKPaymentPass *)arg1 error:(NSError *)arg2;
- (void)generateRequestWithCertificateChain:(void *)arg1 nonce:(void *)arg2 nonceSignature:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAddPaymentPassRequest *, void*

@end
