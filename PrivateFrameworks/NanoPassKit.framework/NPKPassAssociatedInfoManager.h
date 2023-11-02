
@interface NPKPassAssociatedInfoManager : NSObject <PKAccountServiceObserver, PKPaymentServiceDelegate> {
    PKAccountService * _accountService;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSMutableDictionary * _passAssociatedInfoModelsByPassUniqueID;
    NSMutableDictionary * _passUniqueIDsByAccountIdentifier;
    PKPaymentService * _paymentService;
    bool  _paymentServiceWasInterrupted;
    int  _pendingAddValueUpdatedNotifyToken;
}

@property (nonatomic, readonly) PKAccountService *accountService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSMutableDictionary *passUniqueIDsByAccountIdentifier;
@property (copy) NSSet *passes;
@property (nonatomic, readonly) PKPaymentService *paymentService;
@property (nonatomic) bool paymentServiceWasInterrupted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchMostRecentAccountBalanceForPass:(id)arg1;
- (void)_fetchMostRecentBalancesForPass:(id)arg1;
- (void)_fetchMostRecentCommutePlansForPass:(id)arg1;
- (void)_fetchMostRecentInfoForPass:(id)arg1;
- (void)_fetchMostRecentRangingSuspensionReasonForPass:(id)arg1;
- (void)_fetchMostRecentTilesForPass:(id)arg1;
- (void)_fetchMostRecentTransitPropertiesAndAppletStateForPass:(id)arg1;
- (void)_handleReceivedAccountUpdateWithAccount:(id)arg1;
- (void)_internalQueue_processReceivedAccountUpdateWithAccount:(id)arg1;
- (void)_internalQueue_regenerateAssociatedInfoModelForPass:(id)arg1 inModelsByID:(id)arg2;
- (bool)_isPassEligible:(id)arg1;
- (bool)_isPassWithAccountBalanceForPass:(id)arg1;
- (void)_loadPassContentIfNeeded:(id)arg1;
- (void)_notifyObservers:(id /* block */)arg1;
- (void)_notifyObserversOfUpdatedTransitPassInfoForModel:(id)arg1;
- (void)_processAccountBalancesForPassWithUniqueID:(id)arg1 withAccount:(id)arg2;
- (bool)_shouldUseBalanceForAccount:(id)arg1;
- (id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2;
- (void)_updateAllPassesItemsFieldsPendingUpdateStatus;
- (void)_updatePassTransitPassesInfoManagerForPassUniqueID:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)accountChanged:(id)arg1;
- (id)accountService;
- (void)addPass:(id)arg1;
- (bool)canPerformRKEActionsForPassWithUniqueID:(id)arg1;
- (void)credential:(id)arg1 forPaymentApplication:(id)arg2 didUpdateRangingSuspensionReasons:(unsigned long long)arg3;
- (id)init;
- (id)initWithPaymentService:(id)arg1 accountService:(id)arg2;
- (id)observers;
- (id)passInfoForPassWithUniqueID:(id)arg1;
- (id)passUniqueIDsByAccountIdentifier;
- (void)passWithUniqueIdentifier:(id)arg1 didUpdateTiles:(id)arg2;
- (id)passes;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (id)paymentService;
- (void)paymentServiceEstablishedConnection;
- (void)paymentServiceReceivedInterruption;
- (bool)paymentServiceWasInterrupted;
- (unsigned long long)rangingSuspensionReasonForPassWithUniqueID:(id)arg1;
- (void)refreshAllPasses;
- (void)registerObserver:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPassUniqueIDsByAccountIdentifier:(id)arg1;
- (void)setPasses:(id)arg1;
- (void)setPaymentServiceWasInterrupted:(bool)arg1;
- (void)setPendingAmount:(id)arg1 forBalanceField:(id)arg2 passWithUniqueID:(id)arg3;
- (void)unregisterObserver:(id)arg1;

@end
