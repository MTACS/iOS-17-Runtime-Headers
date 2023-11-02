
@interface ManagedSettings.ShieldActionExtensionContext : NSExtensionContext <ManagedSettings.ShieldActionExtensionHost, ManagedSettings.ShieldActionExtensionVendor> {
    void $__lazy_storage_$_shieldActionDelegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)handleWithAction:(long long)arg1 applicationTokenData:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)handleWithAction:(long long)arg1 categoryTokenData:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)handleWithAction:(long long)arg1 webDomainTokenData:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
