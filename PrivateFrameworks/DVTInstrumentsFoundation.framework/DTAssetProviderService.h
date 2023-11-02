
@interface DTAssetProviderService : DTXService {
    NSObject<OS_dispatch_queue> * _concurrentRequestQueue;
    DTXConnection * _connection;
    NSString * _workingDirectory;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentRequestQueue;
@property (nonatomic) DTXConnection *connection;
@property (nonatomic, retain) NSString *workingDirectory;

+ (id)assetManifestPathForApplication:(id)arg1;
+ (void)assetProviderWithConnection:(id)arg1 workingDirectory:(id)arg2 completion:(id /* block */)arg3;
+ (void)beginProvidingAssetsForApplication:(id)arg1 onChannel:(id)arg2 completion:(id /* block */)arg3;
+ (void)beginProvidingAssetsForLocalApplication:(id)arg1 connection:(id)arg2 completion:(id /* block */)arg3;
+ (void)beginProvidingAssetsForRemoteApplication:(id)arg1 workingDirectory:(id)arg2 connection:(id)arg3 completion:(id /* block */)arg4;
+ (bool)shouldStartAssetServerForApplication:(id)arg1;

- (void).cxx_destruct;
- (id)_bestChannelForRequestWithIdentifier:(id)arg1;
- (void)_completeResponseOnChannel:(id)arg1 withIdentifier:(id)arg2;
- (bool)_requestedPath:(id)arg1 belongsToWorkingDirectory:(id)arg2;
- (bool)_serveData:(id)arg1 usingChannel:(id)arg2 forRequestIdentifier:(id)arg3 checkForCancellation:(bool)arg4 error:(id*)arg5;
- (id)concurrentRequestQueue;
- (id)connection;
- (bool)hasCancelledRequestWithIdentifier:(id)arg1 onChannel:(id)arg2;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)registerManifestForApplicationAtPath:(id)arg1 onPort:(unsigned long long)arg2;
- (void)serveDataFromFile:(id)arg1 forRequestIdentifier:(id)arg2;
- (bool)serveDataFromFileHandle:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)serveDataFromZippedDirectory:(id)arg1 forRequestIdentifier:(id)arg2;
- (bool)serveDataWithResultFromZippedDirectory:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)setConcurrentRequestQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setWorkingDirectory:(id)arg1;
- (void)startServerOnDeviceWithCompletion:(id /* block */)arg1;
- (void)startServingAssetsForAppWithPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)workingDirectory;

@end
