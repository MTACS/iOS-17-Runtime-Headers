
@interface UAFXPCConnection : NSObject <UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_invalidate;
- (oneway void)checkAssetStatus:(id /* block */)arg1;
- (void)dealloc;
- (oneway void)diagnosticInformation:(id /* block */)arg1;
- (oneway void)downloadDictationAssetsForLanguage:(id)arg1;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)downloadSizeInBytesForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (void)invalidate;
- (oneway void)operationWithConfig:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)arg1;

@end
