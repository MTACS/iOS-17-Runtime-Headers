
@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {
    NSXPCConnection * _connection;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    PLPhotoLibraryBundle * _libraryBundle;
    SEL  _selector;
}

@property (nonatomic, readonly, copy) NSString *clientDebugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isClientAuthorizedForTCCServicePhotos;
@property (nonatomic, readonly) bool isClientAuthorizedForTCCServicePhotosAdd;
@property (readonly, copy) NSError *shutdownReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)clientDebugDescription;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4;
- (void)invalidateClientAuthorizationCache;
- (bool)isClientAuthorizedForTCCServicePhotos;
- (bool)isClientAuthorizedForTCCServicePhotosAdd;
- (id)libraryServicesManager;
- (id)shutdownReason;

@end
