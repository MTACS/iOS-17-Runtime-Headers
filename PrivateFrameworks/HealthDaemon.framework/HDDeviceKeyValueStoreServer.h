
@interface HDDeviceKeyValueStoreServer : HDStandardTaskServer <HDDeviceKeyValueStoreObserver, HKDeviceKeyValueStoreServerInterface> {
    HKDeviceKeyValueStoreTaskConfiguration * _configuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (void)deviceKeyValueStoreDidUpdateForStorageGroup:(id)arg1 domain:(id)arg2;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fetchEntriesForDomain:(id)arg1 key:(id)arg2 protectionCategory:(long long)arg3 completion:(id /* block */)arg4;
- (void)remote_mostRecentEntryForDomain:(id)arg1 key:(id)arg2 protectionCategory:(long long)arg3 completion:(id /* block */)arg4;
- (void)remote_setData:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 completion:(id /* block */)arg5;
- (void)remote_setDate:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 completion:(id /* block */)arg5;
- (void)remote_setNumber:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 completion:(id /* block */)arg5;
- (void)remote_setString:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 completion:(id /* block */)arg5;
- (void)remote_startObservingDeviceKeyValueStoreWithCompletion:(id /* block */)arg1;

@end
