
@interface BLBookletMigrationStore : NSObject {
    BLServiceProxy * _serviceProxy;
}

@property (nonatomic, readonly) BLServiceProxy *serviceProxy;

- (void).cxx_destruct;
- (id)init;
- (void)migrationInfosWithState:(long long)arg1 completion:(id /* block */)arg2;
- (void)migrationInfosWithStates:(id)arg1 completion:(id /* block */)arg2;
- (void)migrationInfosWithStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)removeAllMigrationInfosExcludingStates:(id)arg1 error:(out id*)arg2;
- (id)serviceProxy;
- (bool)setMigrationState:(long long)arg1 forStoreIDs:(id)arg2 error:(out id*)arg3;

@end
