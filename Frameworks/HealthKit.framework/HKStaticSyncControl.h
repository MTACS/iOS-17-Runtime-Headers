
@interface HKStaticSyncControl : NSObject <HKStaticSyncControlClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 progressHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;

@end
