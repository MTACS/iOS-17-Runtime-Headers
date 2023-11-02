
@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)serviceProxyWithErrorHandler:(id /* block */)arg1;
- (void)updateAppearance:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)updateEditingTo:(bool)arg1 animated:(bool)arg2;

@end
