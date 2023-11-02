
@interface ENExposureDatabase : NSObject {
    ENSQLiteConnection * _connection;
    NSURL * _databaseURL;
    id /* block */  _errorMetricReporter;
}

@property (nonatomic, readonly) ENSQLiteConnection *connection;
@property (nonatomic, copy) id /* block */ errorMetricReporter;
@property (nonatomic, readonly) bool isOpen;

+ (void)_obliterateDatabaseAtURL:(id)arg1 reason:(id)arg2 generateStackshot:(bool)arg3;

- (void).cxx_destruct;
- (id)_advertisementWithRPIData:(id)arg1 encryptedAEMData:(id)arg2 timestamp:(long long)arg3 scanInterval:(int)arg4 typicalRSSI:(int)arg5 maxRSSI:(int)arg6 saturated:(int)arg7 counter:(int)arg8;
- (id)_advertisementsForTemporaryExposureKeyRowID:(long long)arg1 connection:(id)arg2 error:(id*)arg3;
- (bool)_checkDatabaseOpenWithError:(id*)arg1;
- (bool)_createOrMigrateSchemaFromVersion:(long long)arg1 error:(id*)arg2;
- (bool)_createSchemaWithConnection:(id)arg1 error:(id*)arg2;
- (bool)_getExistingPersistentTemporaryExposureKey:(id*)arg1 rowID:(long long*)arg2 keyData:(id)arg3 connection:(id)arg4 error:(id*)arg5;
- (id)_initWithURL:(id)arg1;
- (bool)_insertAdvertisement:(id)arg1 keyRowID:(long long)arg2 connection:(id)arg3 error:(id*)arg4;
- (bool)_insertExposureDetectionFile:(id)arg1 sessionID:(id)arg2 connection:(id)arg3 error:(id*)arg4;
- (bool)_insertOrUpdateExposureDetectionHistorySession:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (bool)_insertPersistentTemporaryExposureKey:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (id)_persistentTemporaryExposureKeyWithKeyData:(id)arg1 appBundleIdentifier:(id)arg2 regionCountryCode:(id)arg3 rollingStartNumber:(long long)arg4 rollingPeriod:(long long)arg5 daysSinceOnsetOfSymptoms:(long long)arg6 diagnosisReportType:(int)arg7 originalReportType:(int)arg8 transmissionRiskLevel:(int)arg9 variantOfConcernType:(int)arg10 originalVariantOfConcernType:(int)arg11;
- (bool)_reallyOpenDatabaseWithError:(id*)arg1;
- (void)_reportErrorMetric:(unsigned int)arg1;
- (void)_reportSQLiteResult:(int)arg1;
- (id)_sessionIDForUUID:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (long long)_updateExistingPersistentKeyIfNecessary:(id)arg1 replacementKey:(id)arg2 existingKeyID:(long long)arg3 connection:(id)arg4 error:(id*)arg5;
- (id)advertisementCountsByTemporaryKeyDatasWithError:(id*)arg1;
- (void)close;
- (id)connection;
- (bool)deleteExposureDetectionHistoryWithError:(id*)arg1;
- (bool)enumerateExposureDetectionHistoryFilesForSessionUUID:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)enumerateExposureDetectionHistorySessionsWithError:(id*)arg1 handler:(id /* block */)arg2;
- (bool)enumerateMatchedAdvertisementsWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id /* block */)errorMetricReporter;
- (bool)getAdvertisementCount:(unsigned int*)arg1 error:(id*)arg2;
- (bool)getValue:(id*)arg1 forKey:(id)arg2 ofClass:(Class)arg3 connection:(id)arg4 error:(id*)arg5;
- (bool)getValue:(id*)arg1 forKey:(id)arg2 ofClass:(Class)arg3 error:(id*)arg4;
- (id)initInMemoryDatabase;
- (id)initWithDirectoryURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)insertExposureDetectionFile:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (long long)insertMatchedAdvertisements:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)isOpen;
- (bool)openWithError:(id*)arg1;
- (void)purgeAllAndCloseWithReason:(id)arg1;
- (bool)purgeRecordsWithInterval:(double)arg1 nowDate:(id)arg2 error:(id*)arg3;
- (void)setErrorMetricReporter:(id /* block */)arg1;
- (bool)setPropertyListValue:(id)arg1 forKey:(id)arg2 expiryDate:(id)arg3 error:(id*)arg4;
- (bool)setValue:(id)arg1 forKey:(id)arg2 expiryDate:(id)arg3 error:(id*)arg4;
- (bool)setValue:(id)arg1 forKey:(id)arg2 type:(long long)arg3 expiryDate:(id)arg4 modDate:(id)arg5 connection:(id)arg6 error:(id*)arg7;
- (bool)upsertExposureDetectionHistorySession:(id)arg1 error:(id*)arg2;

@end
