
@interface HDDeviceContextStoreServer : HDStandardTaskServer <HKDeviceContextStoreServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchEntriesWithCompletion:(id /* block */)arg1;
- (void)remote_numberOfDeviceContextsPerDeviceType:(id /* block */)arg1;

@end
