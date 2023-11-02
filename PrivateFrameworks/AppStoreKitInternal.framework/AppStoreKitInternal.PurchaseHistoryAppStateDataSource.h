
@interface AppStoreKitInternal.PurchaseHistoryAppStateDataSource : NSObject {
    void accessQueue;
    void additionalFamilyMembers;
    void bag;
    void callbackQueue;
    void delegate;
    void expectedAppStates;
    void hasRequestedPurchaseHistoryUpdate;
    void lastAccountId;
    void purchaseHistory;
    void purchaseHistoryContext;
}

- (void).cxx_destruct;
- (void)accountsDidChange;
- (void)dealloc;
- (id)init;
- (void)purchaseHistoryUpdated:(id)arg1;

@end
