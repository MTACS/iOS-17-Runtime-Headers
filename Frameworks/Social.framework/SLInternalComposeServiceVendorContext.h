
@interface SLInternalComposeServiceVendorContext : NSExtensionContext <SLInternalComposeServiceHostProtocol, SLInternalComposeServiceVendorProtocol>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)shouldShowNetworkActivityIndicator:(id)arg1;

@end
