
@interface NRRegistryProxy : NRXPCProxy <NRXPCRegistryDelegate>

+ (id)clientRemoteObjectInterface;
+ (id)entitlements;
+ (id)machServiceName;
+ (bool)requireAnEntitlement;
+ (id)serverExportedInterface;

- (bool)_hasInternalEntitlement;
- (void)logCaller:(SEL)arg1 args:(id)arg2;
- (bool)loudHasEntitlement:(id)arg1;
- (id)registryDelegate;
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(id /* block */)arg3;
- (void)xpcClientInfo:(id /* block */)arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)xpcGetChangeHistoryWithBlock:(id /* block */)arg1;
- (void)xpcGetDeviceCollectionWithBlock:(id /* block */)arg1;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(id /* block */)arg2;
- (void)xpcSetMigrationConsented:(bool)arg1 forDeviceID:(id)arg2 withBlock:(id /* block */)arg3;
- (void)xpcSwitchIndex:(id /* block */)arg1;

@end
