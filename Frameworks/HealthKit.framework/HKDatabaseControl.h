
@interface HKDatabaseControl : NSObject <HKDatabaseControlClient, _HKXPCExportable> {
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
- (void)getHealthDirectorySizeInBytesWithCompletion:(id /* block */)arg1;
- (id)healthDatabaseIdentifierWithError:(id*)arg1;
- (void)hkqa_generateDemoDataWithDurationInDays:(long long)arg1 completion:(id /* block */)arg2;
- (void)hkqa_statisticsWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)performMigrationWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;

@end
