
@interface CXCallDirectoryStoreMigrator : NSObject {
    id /* block */  _retrieveExtensionBlock;
    CXCallDirectoryStore * _store;
    id /* block */  _storeCreationBlock;
}

@property (nonatomic, copy) id /* block */ retrieveExtensionBlock;
@property (nonatomic, retain) CXCallDirectoryStore *store;
@property (nonatomic, copy) id /* block */ storeCreationBlock;

- (void).cxx_destruct;
- (id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id*)arg2;
- (id)init;
- (id)performMigrationsWithError:(id*)arg1;
- (id /* block */)retrieveExtensionBlock;
- (void)setRetrieveExtensionBlock:(id /* block */)arg1;
- (void)setStore:(id)arg1;
- (void)setStoreCreationBlock:(id /* block */)arg1;
- (id)store;
- (id /* block */)storeCreationBlock;

@end
