
@interface SRAuthHostExtensionContext : NSExtensionContext <SRAuthHostProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteProxy;

@end
