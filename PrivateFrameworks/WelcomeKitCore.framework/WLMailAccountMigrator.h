
@interface WLMailAccountMigrator : NSObject <MFAccountValidatorDelegate, WLAnalyticsDataSource, WLDataclassMigrating> {
    ACAccountStore * _accountStore;
    WLFeaturePayload * _featurePayload;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentType;

- (void).cxx_destruct;
- (void)_importGoogleAccountWithUsername:(id)arg1 completion:(id /* block */)arg2;
- (bool)accountBased;
- (id)accountStore;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (void)addWorkingTime:(unsigned long long)arg1;
- (id)contentType;
- (id)dataType;
- (void)enable;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)featurePayload;
- (id)importDidEnd;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (id)init;
- (void)setAccountStore:(id)arg1;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(id)arg1;
- (void)setState:(id)arg1;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end
