
@interface RMProfileStore : NSObject {
    NSString * _ownerIdentifier;
    long long  _scope;
    RMProviderStore * _store;
}

@property (nonatomic, copy) NSString *ownerIdentifier;
@property (nonatomic) long long scope;
@property (nonatomic, retain) RMProviderStore *store;

+ (id)profileStoreForOwner:(id)arg1;
+ (id)profileStoreForOwner:(id)arg1 scope:(long long)arg2;

- (void).cxx_destruct;
- (void)_applyDeclarationsForProfile:(id)arg1 declarations:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_createStoreReturningError:(id*)arg1;
- (id)_findStoreReturningError:(id*)arg1;
- (id)_metadataKeyForProfile:(id)arg1;
- (id)_newDeclarationsMap:(id)arg1 error:(id*)arg2;
- (id)_oldDeclarationKeysForProfile:(id)arg1 error:(id*)arg2;
- (bool)_removeDeclarationKeysForProfile:(id)arg1 error:(id*)arg2;
- (void)_removeDeclarationsForProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_saveDeclarationKeysForProfile:(id)arg1 keys:(id)arg2 error:(id*)arg3;
- (id)initWithOwner:(id)arg1 scope:(long long)arg2;
- (void)installProfile:(id)arg1 declarations:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)ownerIdentifier;
- (id)providerStoreReturningError:(id*)arg1;
- (void)removeProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)scope;
- (void)setOwnerIdentifier:(id)arg1;
- (void)setScope:(long long)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
