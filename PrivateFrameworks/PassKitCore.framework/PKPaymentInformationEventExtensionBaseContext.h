
@interface PKPaymentInformationEventExtensionBaseContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteContext;
- (id)remoteContextWithErrorHandler:(id /* block */)arg1;

@end
