
@interface HKDiagnosticStore : NSObject <HKDiagnosticStoreClient, _HKXPCExportable> {
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
- (void)fetchDiagnosticsForKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPragma:(long long)arg1 completion:(id /* block */)arg2;
- (id)fetchSQLPragma:(long long)arg1 error:(id*)arg2;
- (void)fetchURLForAnalyticsFileWithName:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
