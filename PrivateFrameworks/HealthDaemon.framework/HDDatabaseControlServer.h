
@interface HDDatabaseControlServer : HDStandardTaskServer <HKDatabaseControlServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_getHealthDatabaseIdentifierWithCompletion:(id /* block */)arg1;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(id /* block */)arg1;
- (void)remote_hkqa_generateDemoDataWithDurationInDays:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_hkqa_statisticsWithCompletion:(id /* block */)arg1;
- (void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_performMigrationWithCompletion:(id /* block */)arg1;

@end
