
@interface MCMContainerFactory : NSObject <MCMContainerFactory> {
    <MCMContainerCache> * _cache;
    MCMClientIdentity * _clientIdentity;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) <MCMContainerCache> *cache;
@property (nonatomic, readonly) MCMClientIdentity *clientIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

- (void).cxx_destruct;
- (id)_containerPathIdentifierForContainerIdentity:(id)arg1;
- (id)_createContainerForContainerIdentity:(id)arg1 error:(id*)arg2;
- (id)_generateConcreteContainerIdentityFromContainerIdentity:(id)arg1 error:(id*)arg2;
- (id)cache;
- (id)clientIdentity;
- (id)containerForContainerIdentity:(id)arg1 createIfNecessary:(bool)arg2 error:(id*)arg3;
- (id)createStagedContainerForContainerIdentity:(id)arg1 finalContainerPath:(id*)arg2 dataProtectionClass:(int)arg3 error:(id*)arg4;
- (bool)deleteURL:(id)arg1 forUserIdentity:(id)arg2 error:(id*)arg3;
- (bool)deleteURL:(id)arg1 forUserIdentity:(id)arg2 reclaimSoon:(bool)arg3 error:(id*)arg4;
- (id)initWithContainerCache:(id)arg1 clientIdentity:(id)arg2 userIdentityCache:(id)arg3;
- (bool)upgradeContainer:(id)arg1 clientIdentity:(id)arg2 error:(id*)arg3;
- (id)userIdentityCache;

@end
