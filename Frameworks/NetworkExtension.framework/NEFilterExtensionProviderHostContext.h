
@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderHostProtocol, NEFilterExtensionProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (int)requiredEntitlement;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;

@end
