
@interface EDSearchableIndexVerifier : NSObject <EFLoggable, EFSignpostable> {
    <EDSearchableIndexVerifierDataSource> * _dataSource;
    NSObject<OS_os_activity> * _indexVerificationActivity;
}

@property (nonatomic) <EDSearchableIndexVerifierDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_activity> *indexVerificationActivity;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2;
- (id)_failingSamples:(id)arg1 tester:(id)arg2;
- (unsigned long long)_findMissingTransactionIDs:(id)arg1 dataSource:(id)arg2;
- (id)_missingTransactionIDsFromTransactionIDs:(id)arg1;
- (id)_verifyDataSamples:(id)arg1;
- (id)_verifySamples:(id)arg1;
- (id)dataSource;
- (id)indexVerificationActivity;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIndexVerificationActivity:(id)arg1;
- (unsigned long long)signpostID;
- (void)verifyDataSamplesWithCompletionHandler:(id /* block */)arg1 scheduler:(id)arg2;

@end
