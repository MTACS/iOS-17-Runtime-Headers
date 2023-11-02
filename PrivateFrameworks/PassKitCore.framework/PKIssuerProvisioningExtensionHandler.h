
@interface PKIssuerProvisioningExtensionHandler : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)generateAddPaymentPassRequestForPassEntryWithIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)passEntriesWithCompletion:(id /* block */)arg1;
- (void)remotePassEntriesWithCompletion:(id /* block */)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;

@end
