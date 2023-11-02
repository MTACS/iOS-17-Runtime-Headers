
@interface CDPDSOSSecureBackupController : NSObject <CDPDSecureBackupControl> {
    NSDictionary * _cachedAccountInfo;
    CDPDSecureBackupConfiguration * _configuration;
    CDPContext * _context;
    <CDPDSecureBackupDelegate> * _delegate;
    <CDPDSecureBackupProxy> * _secureBackupProxy;
    <CDPStateUIProviderInternal> * _uiProvider;
    bool  fakeNearlyDepletedRecords;
}

@property (nonatomic, retain) NSDictionary *cachedAccountInfo;
@property (nonatomic, retain) CDPDSecureBackupConfiguration *configuration;
@property (nonatomic, readonly) CDPContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPDSecureBackupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fakeNearlyDepletedRecords;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CDPDSecureBackupProxy> *secureBackupProxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CDPStateUIProviderInternal> *uiProvider;

+ (id)_sanitizedInfoDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_accountInfo:(id*)arg1;
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(bool)arg1 completion:(id /* block */)arg2;
- (id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id*)arg2;
- (id)_recoveryInfoDictionaryFromContext:(id)arg1;
- (void)accountInfoWithCompletion:(id /* block */)arg1;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)arg1;
- (id)cachedAccountInfo;
- (void)checkForExistingRecord:(id /* block */)arg1;
- (void)checkForExistingRecordMatchingPredicate:(id)arg1 forceFetch:(bool)arg2 completion:(id /* block */)arg3;
- (void)checkForExistingRecordWithPeerId:(id)arg1 completion:(id /* block */)arg2;
- (void)clearAccountInfoCache;
- (id)configuration;
- (id)context;
- (id)delegate;
- (bool)fakeNearlyDepletedRecords;
- (void)getBackupRecordDevicesWithOptionForceFetch:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;
- (void)isEligibleForCDPWithCompletion:(id /* block */)arg1;
- (void)performEscrowRecoveryWithRecoveryContext:(id)arg1 completion:(id /* block */)arg2;
- (void)recoverSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)secureBackupProxy;
- (void)setCachedAccountInfo:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFakeNearlyDepletedRecords:(bool)arg1;
- (void)setSecureBackupProxy:(id)arg1;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)arg1;
- (id)uiProvider;

@end
