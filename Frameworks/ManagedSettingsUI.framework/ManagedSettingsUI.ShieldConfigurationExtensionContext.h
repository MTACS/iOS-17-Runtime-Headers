
@interface ManagedSettingsUI.ShieldConfigurationExtensionContext : NSExtensionContext <ManagedSettingsUI.ShieldConfigurationExtensionHost, ManagedSettingsUI.ShieldConfigurationExtensionVendor> {
    void $__lazy_storage_$_shieldConfigurationDataSource;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)fetchConfigurationDataForApplication:(id)arg1 localizedApplicationDisplayName:(id)arg2 categoryTokenData:(id)arg3 localizedCategoryDisplayName:(id)arg4 replyHandler:(id /* block */)arg5;
- (void)fetchConfigurationDataForApplication:(id)arg1 tokenData:(id)arg2 localizedDisplayName:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)fetchConfigurationDataForWebDomain:(id)arg1 categoryTokenData:(id)arg2 localizedDisplayName:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)fetchConfigurationDataForWebDomain:(id)arg1 tokenData:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
