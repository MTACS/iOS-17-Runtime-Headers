
@interface HKClinicalAccountStore : NSObject <HKClinicalAccountStoreClientInterface, _HKXPCExportable> {
    HKObserverSet * _accountStateChangeObservers;
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
    id /* block */  _unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id /* block */)_clientQueueBoolHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)_clientQueueDoubleBoolHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)_clientQueueFailableActionHandlerWithCompletion:(id /* block */)arg1;
- (void)_establishProxyConnection;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void)_executeCheapCallOnPluginServerProxy:(id)arg1;
- (void)_fetchServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_getSynchronousServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)arg1;
- (id)accountWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)addAccountStateChangeListener:(id)arg1;
- (id)allAccountsWithError:(id*)arg1;
- (void)beginInitialLoginSessionForGateway:(id)arg1 completion:(id /* block */)arg2;
- (void)beginReloginSessionForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_accountDidChange:(id)arg1 changeType:(long long)arg2;
- (void)connectionInvalidated;
- (void)createStaticAccountWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 countryCode:(id)arg4 fhirVersion:(id)arg5 onlyIfNeededForSimulatedGatewayID:(id)arg6 completion:(id /* block */)arg7;
- (void)deleteAccountWithIdentifier:(id)arg1 deletionReason:(long long)arg2 completion:(id /* block */)arg3;
- (void)deviceConfigurationSupportsHealthRecords:(id /* block */)arg1;
- (void)endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(id /* block */)arg3;
- (id)exportedInterface;
- (void)fetchAccountForSource:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAccountsForGatewaysWithExternalIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllAccountsWithCompletion:(id /* block */)arg1;
- (void)fetchAllEventsForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hasAnyHealthRecordsAccountWithCompletion:(id /* block */)arg1;
- (void)hasGatewayBackedHealthRecordsAccountWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)invalidateCredentialForAccountWithIdentifier:(id)arg1 event:(id)arg2 completion:(id /* block */)arg3;
- (void)persistEphemeralAccount:(id)arg1 triggerIngestion:(bool)arg2 completion:(id /* block */)arg3;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)arg1;
- (void)refreshAccountConnectionInformationForAccountsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)removeAccountStateChangeListener:(id)arg1;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(id /* block */)arg3;
- (void)setUnitTesting_didCallReestablishProxyConnectionIfObserversArePresent:(id /* block */)arg1;
- (void)shouldShowHealthRecordsSectionWithCompletion:(id /* block */)arg1;
- (void)simulateAccountDownloadOverdueWithIdentifier:(id)arg1 stage:(long long)arg2 completion:(id /* block */)arg3;
- (void)simulateUnmergeEventForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)supportsClinicalSharing;
- (id /* block */)unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
- (void)updateAccountCredentialStateForAccountWithIdentifier:(id)arg1 state:(long long)arg2 event:(id)arg3 completion:(id /* block */)arg4;
- (void)updateClinicalSharingStatusForAccountWithIdentifier:(id)arg1 firstSharedDate:(id)arg2 lastSharedDate:(id)arg3 userStatus:(id)arg4 multiDeviceStatus:(id)arg5 primaryDeviceName:(id)arg6 completion:(id /* block */)arg7;

@end
