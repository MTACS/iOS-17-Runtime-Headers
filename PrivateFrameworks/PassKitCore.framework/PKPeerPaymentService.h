
@interface PKPeerPaymentService : NSObject <PKPeerPaymentServiceExportedInterface, PKPeerPaymentTargetDeviceDelegate> {
    PKPeerPaymentAccount * _account;
    long long  _accountChangedNotificationSuspensionCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    NSHashTable * _observers;
    PKPeerPaymentPreferences * _preferences;
    PKXPCService * _remoteService;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) PKPeerPaymentPreferences *preferences;
@property (nonatomic, retain) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_postAccountChangeNotificationIfNecessaryForAccount:(id)arg1 previousAccount:(id)arg2;
- (void)_preferencesChanged:(id)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)account;
- (void)accountWithCompletion:(id /* block */)arg1;
- (id)balanceForPass:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAccountWithCompletion:(id /* block */)arg1;
- (void)deleteAllRecurringPaymentsWithCompletion:(id /* block */)arg1;
- (void)deletePeerPaymentPendingRequestsForPeerPaymentAccount;
- (void)deletePeerPaymentPendingRequestsForRequestTokens:(id)arg1;
- (void)deletePreferencesWithCompletion:(id /* block */)arg1;
- (void)deleteRecurringPaymentsForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (bool)hasRecurringPayments;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)arg1;
- (void)insertOrUpdatePeerPaymentPendingRequests:(id)arg1 shouldScheduleNotifications:(bool)arg2;
- (void)insertOrUpdateRecurringPayments:(id)arg1 completion:(id /* block */)arg2;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)peerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(id /* block */)arg1;
- (void)peerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(id /* block */)arg2;
- (void)pendingRequestsChanged;
- (void)performRecurringPaymentAction:(unsigned long long)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (id)preferences;
- (void)preferencesWithCompletion:(id /* block */)arg1;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 hostSceneIdentifier:(id)arg6 hostSceneBundleIdentifier:(id)arg7 completion:(id /* block */)arg8;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 hostSceneIdentifier:(id)arg3 hostSceneBundleIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)receivedPeerPaymentMessageData:(id)arg1;
- (void)recurringPaymentsChanged;
- (void)recurringPaymentsWithCompletion:(id /* block */)arg1;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)registerDeviceWithForceReregister:(bool)arg1 completion:(id /* block */)arg2;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(bool)arg3 completion:(id /* block */)arg4;
- (void)registerObserver:(id)arg1;
- (void)registrationStatusWithCompletion:(id /* block */)arg1;
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (void)resumeAccountChangedNotifications;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)setPreferences:(id)arg1 completion:(id /* block */)arg2;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1;
- (id)sharedPeerPaymentWebServiceContext;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (void)suspendAccountChangedNotifications;
- (void)unregisterDeviceWithCompletion:(id /* block */)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateAccountAndAssociatedAccountsWithCompletion:(id /* block */)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (void)updateAssociatedAccountsWithCompletion:(id /* block */)arg1;
- (void)updateAutoReloadAmount:(id)arg1 threshold:(id)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePreferencesWithCompletion:(id /* block */)arg1;
- (void)updateRecurringPaymentMemo:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)updateRecurringPaymentStatus:(unsigned long long)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)updateRecurringPaymentsWithCompletion:(id /* block */)arg1;

@end
