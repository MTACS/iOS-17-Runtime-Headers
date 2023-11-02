
@interface WLCalendarMigrator : NSObject <WLAnalyticsDataSource, WLDataclassMigrating> {
    EKEventStore * _eventStore;
    WLFeaturePayload * _featurePayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentType;

- (void).cxx_destruct;
- (void)_importDataRecord:(id)arg1 summary:(id)arg2;
- (bool)accountBased;
- (void)addWorkingTime:(unsigned long long)arg1;
- (id)contentType;
- (id)dataType;
- (void)enable;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)featurePayload;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (id)init;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(id)arg1;
- (void)setState:(id)arg1;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end
