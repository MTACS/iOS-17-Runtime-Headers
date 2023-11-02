
@interface CDPInternalWalrusStateController : NSObject {
    ACAccountStore * _accountStore;
    CDPAccount * _cdpAccount;
    CDPDAccount * _cdpDaemonAccount;
    <CDPProtectedCloudStorageProxy> * _pcsProxy;
    <CDPWalrusSecurityProxy> * _securityProxy;
}

- (void).cxx_destruct;
- (id)_eligibleAccountWithContext:(id)arg1 checkWithServer:(bool)arg2 requireCKAccount:(bool)arg3 error:(id*)arg4;
- (id)_eligiblePrimaryAccountForFlow:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)_escrowedKeysStatusUsingICDP:(id)arg1;
- (id)_fetchiCDPAccountInfoDictionaryWithContext:(id)arg1 error:(id*)arg2;
- (id)_optionsWithContext:(id)arg1;
- (unsigned long long)_pcsAccountInfoStatusUsingICDP:(id)arg1;
- (void)_setAccountTelemetryOptInConfig:(bool)arg1 altDSID:(id)arg2 authController:(id)arg3 accountManager:(id)arg4 completion:(id /* block */)arg5;
- (unsigned long long)_statusForError:(id)arg1;
- (void)_updateWalrusState:(bool)arg1 context:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (void)_updateWalrusStateAndPerformPostEnablementActions:(bool)arg1 context:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)_walrusStatusForPrimaryAccountWithError:(id*)arg1;
- (unsigned long long)_walrusStatusWithOptions:(id)arg1 withError:(id*)arg2;
- (id)initWithAccount:(id)arg1 cdpdAccount:(id)arg2 securityProxy:(id)arg3 pcsProxy:(id)arg4;
- (id)initWithAccount:(id)arg1 cdpdAccount:(id)arg2 securityProxy:(id)arg3 pcsProxy:(id)arg4 accountStore:(id)arg5;
- (id)initWithContext:(id)arg1;
- (void)repairWalrusStatusWithCompletion:(id /* block */)arg1;
- (void)setWalrusStatusEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setWebAccessStatusEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (unsigned long long)walrusStatusWithContext:(id)arg1 error:(id*)arg2;
- (void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end
