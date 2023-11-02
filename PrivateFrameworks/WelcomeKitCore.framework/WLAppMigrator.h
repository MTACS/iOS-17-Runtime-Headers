
@interface WLAppMigrator : NSObject <WLAnalyticsDataSource, WLDataclassMigrating> {
    WLSourceDevice * _device;
    WLFeaturePayload * _featurePayload;
    WLSQLController * _sqlController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WLSourceDevice *device;
@property (nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WLSQLController *sqlController;
@property (readonly) Class superclass;

+ (void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg1 completion:(id /* block */)arg2;
+ (id)_ssItemForiTunesStoreIdentifier:(id)arg1;
+ (id)contentType;
+ (id)dataType;
+ (void)installMigratableApps:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_insertMatchingApps:(id)arg1;
- (void)_lookupStoreItemsMatchingExternalIDs:(id)arg1 attempt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (bool)accountBased;
- (void)addWorkingTime:(unsigned long long)arg1;
- (id)contentType;
- (id)dataType;
- (id)device;
- (void)enable;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)featurePayload;
- (void)importDataFromProvider:(id /* block */)arg1 forSummaries:(id)arg2 summaryStart:(id /* block */)arg3 summaryCompletion:(id /* block */)arg4;
- (id)initWithDevice:(id)arg1 sqlController:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(id)arg1;
- (void)setSqlController:(id)arg1;
- (void)setState:(id)arg1;
- (id)sqlController;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end
