
@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>

- (bool)canAccessAdvertisingIdentifier;
- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (unsigned int)findAppBundleForExecutableURL:(id)arg1 withContext:(struct LSContext { id x1; }*)arg2;
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;
- (bool)hasUninstallEntitlement;
- (id)initWithXPCConnection:(id)arg1;

@end
