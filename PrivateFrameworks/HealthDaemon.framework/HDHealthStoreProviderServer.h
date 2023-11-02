
@interface HDHealthStoreProviderServer : HDStandardTaskServer <HDHealthStoreProviderServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchAvailableIdentifiersWithCompletion:(id /* block */)arg1;
- (void)remote_fetchForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_requestAuthorizationToNewIdentifierWithCompletion:(id /* block */)arg1;

@end
