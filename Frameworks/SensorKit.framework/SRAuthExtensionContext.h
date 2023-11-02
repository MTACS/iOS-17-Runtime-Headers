
@interface SRAuthExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteProxy;

@end
