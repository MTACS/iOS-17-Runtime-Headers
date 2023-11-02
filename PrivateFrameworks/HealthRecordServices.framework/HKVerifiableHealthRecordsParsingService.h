
@interface HKVerifiableHealthRecordsParsingService : NSObject <_HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKProxyProvider *proxyProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)parseDataSource:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setProxyProvider:(id)arg1;

@end
