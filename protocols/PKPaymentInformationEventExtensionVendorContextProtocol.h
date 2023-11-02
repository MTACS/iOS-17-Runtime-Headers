
@protocol PKPaymentInformationEventExtensionVendorContextProtocol

@required

- (oneway void)handleConfigurationRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: PKBarcodeEventConfigurationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)handleInformationRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKBarcodeEventMetadataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKBarcodeEventMetadataResponse *, void*
- (oneway void)handleSignatureRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKBarcodeEventSignatureRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKBarcodeEventSignatureResponse *, void*

@end
