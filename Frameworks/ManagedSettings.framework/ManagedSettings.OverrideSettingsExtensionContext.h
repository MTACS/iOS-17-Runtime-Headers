
@interface ManagedSettings.OverrideSettingsExtensionContext : NSExtensionContext <ManagedSettings.OverrideSettingsExtensionHost, ManagedSettings.OverrideSettingsExtensionVendor> {
    void $__lazy_storage_$_overrideSettingsHandler;
}

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)askToOverrideUnremovabilityOfApplicationWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
