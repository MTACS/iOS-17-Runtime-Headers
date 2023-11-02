
@interface WLMigrator : NSObject <WLDataMigratorProtocol> {
    WLSocketHandler * _activeSocketHandler;
    <WLMigrationDataSource> * _dataSource;
}

@property (nonatomic) WLSocketHandler *activeSocketHandler;
@property (nonatomic, retain) <WLMigrationDataSource> *dataSource;

+ (unsigned long long)_bytesFreeOnDevice;
+ (id)_dataTypesAndSizesXMLDataFromMap:(id)arg1;
+ (void)_parseDataTypesXMLData:(id)arg1 completion:(id /* block */)arg2;
+ (void)_presentPromptForMigrableApps:(id /* block */)arg1;
+ (bool)_shouldContinueMigrationFromAnotherDevice;
+ (bool)_shouldTerminateMigrationBeforeImport;
+ (id)_systemVersion;
+ (void)setStashDataLocally:(bool)arg1;
+ (bool)stashDataLocally;

- (void).cxx_destruct;
- (void)_cleanUpAfterFinalizeMigratableAppsWithSQLController:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteDownloadsPath:(id)arg1;
- (double)_didFinishDownloadingSegmentOfSize:(unsigned long long)arg1 expectedSize:(unsigned long long)arg2 migratorEstimatesItemSizes:(bool)arg3 endDate:(id)arg4 context:(id)arg5;
- (id)_downloadDataWithContext:(id)arg1 failureDetailsBlock:(id /* block */)arg2;
- (id)_fetchAccountsAndSummariesWithContext:(id)arg1;
- (void)_finishMigrationWithError:(id)arg1 context:(id)arg2 disconnected:(bool)arg3 completion:(id /* block */)arg4;
- (id)_importDataWithContext:(id)arg1 failureDetailsBlock:(id /* block */)arg2;
- (void)_incrementProgressBy:(double)arg1 context:(id)arg2;
- (void)_logStatisticsAndSendStatisticsTelemetryWithContext:(id)arg1;
- (void)_prepareMetadata:(id)arg1 usingRetryPolicies:(bool)arg2 allowContinuationFromAnotherDevice:(bool)arg3;
- (double)_progressIncrementForImportedSummary:(id)arg1 summaries:(id)arg2 accounts:(id)arg3 migrators:(id)arg4;
- (void)_reportTimeEstimatesWithContext:(id)arg1;
- (id)_selectDataTypesWithContext:(id)arg1;
- (void)_selectFromDataTypeToSizeMap:(id)arg1 device:(id)arg2 completion:(id /* block */)arg3;
- (void)_setProgressTo:(double)arg1 context:(id)arg2;
- (bool)_shouldForceDownloadError;
- (bool)_shouldTerminateMigrationOnError;
- (void)_updateSourceWithProgress:(double)arg1 remainingTime:(double)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (id)activeSocketHandler;
- (void)cleanup;
- (void)close:(id /* block */)arg1;
- (void)connectionDidEnd;
- (id)dataSource;
- (void)dealloc;
- (void)deleteMessages;
- (id)downloadData:(id)arg1;
- (id)fetchSummary:(id)arg1;
- (void)finalizeMigratableAppsWithCompletion:(id /* block */)arg1;
- (id)finishMigration:(id)arg1;
- (id)importData:(id)arg1;
- (id)migrators:(id)arg1;
- (id)prepare:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)runPostMigrationTasks:(id)arg1;
- (id)selectDataTypes:(id)arg1;
- (void)setActiveSocketHandler:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)startMigration:(id)arg1 usingRetryPolicies:(bool)arg2 completion:(id /* block */)arg3;
- (void)startMigrationWithSourceDevice:(id)arg1 usingRetryPolicies:(bool)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;

@end
