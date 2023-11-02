
@interface MKAccountMigrator : MKMigrator <MFAccountValidatorDelegate> {
    ACAccountStore * _accountStore;
    MFAccountValidator * _accountValidator;
    unsigned long long  _completedOperationCount;
    bool  _isImporting;
    NSMutableDictionary * _startDatesByAccountName;
    unsigned long long  _totalOperationCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountStoreDidImportAccount:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (void)import;
- (void)import:(id)arg1;
- (void)importDataEncodedInJSON:(id)arg1;
- (id)init;

@end
