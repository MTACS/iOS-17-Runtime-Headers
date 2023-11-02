
@protocol MCMContainerFactory <NSObject>

@required

- (<MCMContainerCacheEntry> *)containerForContainerIdentity:(MCMContainerIdentity *)arg1 createIfNecessary:(bool)arg2 error:(id*)arg3;
- (<MCMMetadata> *)createStagedContainerForContainerIdentity:(MCMContainerIdentity *)arg1 finalContainerPath:(id*)arg2 dataProtectionClass:(int)arg3 error:(id*)arg4;
- (bool)deleteURL:(NSURL *)arg1 forUserIdentity:(MCMUserIdentity *)arg2 error:(id*)arg3;
- (bool)deleteURL:(NSURL *)arg1 forUserIdentity:(MCMUserIdentity *)arg2 reclaimSoon:(bool)arg3 error:(id*)arg4;

@end
