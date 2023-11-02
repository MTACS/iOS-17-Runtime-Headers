
@interface CLSUtilityService : NSObject {
    CLSEndpointConnection * _endpointConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CLSEndpointConnection *endpointConnection;

+ (Class)endpointClass;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountChangedTrigger:(id /* block */)arg1;
- (void)addAdminRequestor:(id)arg1 completion:(id /* block */)arg2;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forHandoutAssignedItem:(id)arg2 completion:(id /* block */)arg3;
- (void)addOrganization:(id)arg1 withLocations:(id)arg2 completion:(id /* block */)arg3;
- (void)authorizationStatusForContextAtPath:(id)arg1 completion:(id /* block */)arg2;
- (void)authorizationStatusForHandoutAssignedItem:(id)arg1 completion:(id /* block */)arg2;
- (void)currentUserContentStoreCacheDirectoryURLWithCompletion:(id /* block */)arg1;
- (void)databasePathWithCompletion:(id /* block */)arg1;
- (void)deleteOrganization:(id)arg1 completion:(id /* block */)arg2;
- (id)endpointConnection;
- (void)fetchReportsWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)getClassKitCatalogEnvironmentWithCompletion:(id /* block */)arg1;
- (void)getDevModeWithCompletion:(id /* block */)arg1;
- (id)initWithEndpoint:(id)arg1;
- (void)recreateDatabase:(bool)arg1 andTerminateDaemonWithCompletion:(id /* block */)arg2;
- (void)recreateDatabaseWithCompletion:(id /* block */)arg1;
- (void)recreateDevelopmentDatabaseWithCompletion:(id /* block */)arg1;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forHandoutAssignedItem:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsWithCompletion:(id /* block */)arg1;
- (void)setClassKitCatalogEnvironment:(long long)arg1 completion:(id /* block */)arg2;
- (void)setDevMode:(int)arg1 completion:(id /* block */)arg2;
- (void)setEndpointConnection:(id)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;
- (void)syncBootstrapWithCompletion:(id /* block */)arg1;
- (void)syncFetchWithCompletion:(id /* block */)arg1;
- (void)syncGetClassKitCatalogEnvironmentWithCompletion:(id /* block */)arg1;
- (void)syncGetDevModeWithCompletion:(id /* block */)arg1;
- (void)syncPushWithCompletion:(id /* block */)arg1;
- (void)syncRecreateDevelopmentDatabaseWithCompletion:(id /* block */)arg1;
- (void)syncSetClassKitCatalogEnvironment:(long long)arg1 completion:(id /* block */)arg2;
- (void)syncSetDevMode:(int)arg1 completion:(id /* block */)arg2;
- (void)syncStatsWithCompletion:(id /* block */)arg1;
- (id)syncUtilityServer:(id /* block */)arg1;
- (void)topLevelContentStoreCacheDirectoryURLWithCompletion:(id /* block */)arg1;
- (id)utilityServer:(id /* block */)arg1;

@end
