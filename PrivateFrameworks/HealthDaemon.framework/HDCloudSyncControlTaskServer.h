
@interface HDCloudSyncControlTaskServer : HDStandardTaskServer <HDCloudSyncCoordinatorObserver, HKCloudSyncControlServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (void)cloudSyncCoordinator:(id)arg1 syncRequestDidCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_accountConfigurationDidChangeWithCompletion:(id /* block */)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)arg1;
- (void)remote_disableCloudSyncWithCompletion:(id /* block */)arg1;
- (void)remote_enableCloudSyncWithCompletion:(id /* block */)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(id /* block */)arg1;
- (id)remote_fetchCloudSyncProgressWithCompletion:(id /* block */)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudResetWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)arg1;
- (void)remote_requestDataRefreshWithCompletion:(id /* block */)arg1;
- (void)remote_syncWithRequest:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;

@end
