
@interface HDEntitlementStoreServer : HDStandardTaskServer <HKEntitlementStoreServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchContainerAppExtensionEntitlementsWithCompletion:(id /* block */)arg1;

@end
