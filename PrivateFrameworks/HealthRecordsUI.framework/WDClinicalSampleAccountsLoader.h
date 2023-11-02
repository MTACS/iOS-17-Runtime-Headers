
@interface WDClinicalSampleAccountsLoader : NSObject {
    NSArray * _accountDataBatches;
    NSArray * _cachedAccounts;
    HRProfile * _profile;
}

@property (nonatomic, copy) NSArray *accountDataBatches;
@property (nonatomic, copy) NSArray *cachedAccounts;
@property (nonatomic, retain) HRProfile *profile;

+ (id)knownAccountFiles;

- (void).cxx_destruct;
- (void)_createAccountAndTriggerIngestForDataBatch:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (id)_createTemporaryFileForDataBatch:(id)arg1 error:(id*)arg2;
- (id)_parseAccounts;
- (id)_sampleAccountForGatewayWithExternalID:(id)arg1 error:(id*)arg2;
- (bool)_triggerIngestOfDataBatch:(id)arg1 accountIdentifier:(id)arg2 error:(id*)arg3;
- (id)accountDataBatches;
- (id)cachedAccounts;
- (id)initWithProfile:(id)arg1;
- (void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)arg1 completion:(id /* block */)arg2;
- (id)profile;
- (id)providerForSampleDataSearchResultWithExternalID:(id)arg1 error:(id*)arg2;
- (id)sampleAccountsAsSearchResults;
- (void)setAccountDataBatches:(id)arg1;
- (void)setCachedAccounts:(id)arg1;
- (void)setProfile:(id)arg1;

@end
