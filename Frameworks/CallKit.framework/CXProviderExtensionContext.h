
@interface CXProviderExtensionContext : NSExtensionContext

@property (readonly, retain) id remoteObjectProxy;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
