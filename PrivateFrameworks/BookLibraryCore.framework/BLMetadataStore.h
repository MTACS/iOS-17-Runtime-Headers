
@interface BLMetadataStore : NSObject {
    BLServiceProxy * _serviceProxy;
}

@property (nonatomic, readonly) BLServiceProxy *serviceProxy;

- (void).cxx_destruct;
- (id)init;
- (void)racGUIDForStoreID:(long long)arg1 result:(id /* block */)arg2;
- (bool)removeRacGUIDForStoreID:(long long)arg1 error:(out id*)arg2;
- (id)serviceProxy;
- (bool)setRacGUID:(id)arg1 forStoreID:(long long)arg2 error:(out id*)arg3;

@end
