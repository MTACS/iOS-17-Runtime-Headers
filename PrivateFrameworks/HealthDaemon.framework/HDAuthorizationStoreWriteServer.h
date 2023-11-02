
@interface HDAuthorizationStoreWriteServer : HDStandardTaskServer <HKAuthorizationStoreWriteServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 sessionIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(id /* block */)arg4;

@end
