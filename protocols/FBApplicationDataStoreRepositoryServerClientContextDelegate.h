
@protocol FBApplicationDataStoreRepositoryServerClientContextDelegate <NSObject>

@required

- (void)applicationDataStoreRepositoryClientContext:(FBApplicationDataStoreRepositoryServerClientContext *)arg1 repositoryInvalidatedForAppID:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClientContext:(FBApplicationDataStoreRepositoryServerClientContext *)arg1 valueChangedForObject:(id)arg2 key:(NSString *)arg3 appID:(NSString *)arg4;

@end
