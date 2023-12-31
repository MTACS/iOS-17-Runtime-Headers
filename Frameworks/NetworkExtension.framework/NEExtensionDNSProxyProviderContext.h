
@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionPoint;
- (Class)requiredProviderSuperClass;
- (void)setSystemDNSSettings:(id)arg1;

@end
