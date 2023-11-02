
@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType> {
    NFMutexLock * _accessLock;
    <FCBundleSubscriptionManagerType> * _bundleSubscriptionManager;
    NSMutableDictionary * _cachedPurchaseModels;
    <FCPurchaseManagerDelegate> * _delegate;
    NSString * _lastSignedInItunesAccountDSID;
    FCKeyValueStore * _localStore;
    NSMutableDictionary * _ongoingPurchaseEntriesByProductID;
    <FCPaymentTransactionManager> * _paymentTransactionManager;
    FCPurchaseController * _purchaseController;
    <FCPurchaseIntegrityChecker> * _purchaseIntegrityChecker;
    <FCPurchaseReceiptProvider> * _purchaseReceiptProvider;
    FCReceiptRefresher * _receiptRefresher;
    <FCPurchaseFlowOverrideProviderType> * purchaseFlowOverrideProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCPurchaseManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCPurchaseFlowOverrideProviderType> *purchaseFlowOverrideProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationWillEnterForeground;
- (bool)anyOngoingPurchases;
- (id)delegate;
- (id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(bool)arg2;
- (id)init;
- (id)initWithCloudContext:(id)arg1 purchaseIntegrityChecker:(id)arg2 purchaseReceiptProvider:(id)arg3 paymentTransactionManager:(id)arg4 bundleSubscriptionManager:(id)arg5 keyValueStoreOption:(unsigned long long)arg6;
- (bool)isPurchaseOngoingForTagID:(id)arg1;
- (id)purchaseFlowOverrideProvider;
- (void)setDelegate:(id)arg1;
- (void)setPurchaseFlowOverrideProvider:(id)arg1;
- (void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3;
- (void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3;
- (void)startBundlePurchaseWithPurchase:(id)arg1 error:(id*)arg2;
- (void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(bool)arg3 error:(id*)arg4;
- (void)transactionFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3;
- (void)transactionPurchased:(id)arg1;

@end
