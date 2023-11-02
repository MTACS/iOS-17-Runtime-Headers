
@interface BMStorePublisherManagerProtectedState : NSObject {
    BMStreamDatastoreReader * _localDatastore;
    NSMutableDictionary * _remoteDatastores;
}

@property (nonatomic, retain) BMStreamDatastoreReader *localDatastore;
@property (nonatomic, retain) NSMutableDictionary *remoteDatastores;

- (void).cxx_destruct;
- (id)init;
- (id)localDatastore;
- (id)remoteDatastores;
- (void)setLocalDatastore:(id)arg1;
- (void)setRemoteDatastores:(id)arg1;

@end
