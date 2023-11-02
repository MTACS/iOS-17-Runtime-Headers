
@protocol PKIssuerProvisioningExtensionProviderContextExportedInterface <NSObject>

@required

- (void)generateRequestWithEntryIdentifier:(void *)arg1 configuration:(void *)arg2 certificateChain:(void *)arg3 nonce:(void *)arg4 nonceSignature:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: NSString *, PKAddPaymentPassRequestConfiguration *, NSArray *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAddPaymentPassRequest *, void*
- (void)passEntriesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)remotePassEntriesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)statusWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKIssuerProvisioningExtensionStatus *, void*

@end
