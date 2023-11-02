
@interface WLPhotosMigrator : NSObject <WLAnalyticsDataSource, WLDataclassMigrating> {
    WLFeaturePayload * _featurePayload;
    unsigned long long  _importErrorCount;
    WLPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentType;

- (void).cxx_destruct;
- (bool)accountBased;
- (void)addWorkingTime:(unsigned long long)arg1;
- (id)contentType;
- (id)dataType;
- (void)enable;
- (id)featurePayload;
- (id)importDidEnd;
- (unsigned long long)importErrorCount;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(id)arg1;
- (void)setState:(id)arg1;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end
