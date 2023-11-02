
@interface WDClinicalSourcesDataProvider : NSObject {
    HKClinicalAccountStore * _clinicalAccountStore;
    HKHealthRecordsStore * _healthRecordsStore;
}

@property (nonatomic, readonly) HKClinicalAccountStore *clinicalAccountStore;
@property (nonatomic, readonly) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, readonly) HKHealthStore *healthStore;

+ (id /* block */)_logoCompletionOnMainQueue:(id /* block */)arg1 cancellationToken:(id)arg2;
+ (id /* block */)_objectCompletionOnMainQueue:(id /* block */)arg1 cancellationToken:(id)arg2;

- (void).cxx_destruct;
- (id)_accountsForGateways:(id)arg1;
- (void)_fetchAccountsForDisplayWithCompletion:(id /* block */)arg1;
- (id)_fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)_logoForFallback:(id)arg1 size:(double)arg2;
- (id)_orderAccountsForDisplay:(id)arg1;
- (id)accountsForDisplay;
- (id)accountsForDisplayForGateways:(id)arg1;
- (bool)anyRegisteredAccounts;
- (id)appSourceRequestingAuthorizationForClinicalTypeWithBundleIdentifier:(id)arg1;
- (void)beginInitialLoginSessionForGateway:(id)arg1 fromViewController:(id)arg2 loginCancelledHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)beginReloginSessionForAccount:(id)arg1 fromViewController:(id)arg2 profile:(id)arg3 loginCancelledHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (id)clinicalAccountStore;
- (id)fetchAccessedAccountsForDisplayWithCompletion:(id /* block */)arg1;
- (id)fetchAccountForSource:(id)arg1;
- (void)fetchAccountForSource:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchAccountOwnerForSource:(id)arg1;
- (void)fetchAccountOwnerForSource:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchAccountsForDisplayWithCompletion:(id /* block */)arg1;
- (id)fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 completion:(id /* block */)arg4;
- (void)fetchSubjectAndExpirationDateForSignedClinicalDataRecordWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)formattedFullName:(id)arg1 birthDate:(id)arg2 useMultipleLines:(bool)arg3;
- (id)gatewaysWithExistingAccountsFromGateways:(id)arg1;
- (id)healthRecordsStore;
- (id)healthStore;
- (id)init;
- (id)initWithHealthRecordsStore:(id)arg1;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)arg1;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)arg1 useMultipleLines:(bool)arg2;
- (id)nameAndFormattedBirthDateForSignedClinicalDataSubject:(id)arg1;
- (id)nameAndFormattedBirthDateForSignedClinicalDataSubject:(id)arg1 useMultipleLines:(bool)arg2;
- (id)sourcesRequestingAuthorizationForClinicalTypes;

@end
