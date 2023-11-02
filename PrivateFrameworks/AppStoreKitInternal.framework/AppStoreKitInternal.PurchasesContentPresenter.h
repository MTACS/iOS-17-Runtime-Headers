
@interface AppStoreKitInternal.PurchasesContentPresenter : AppStoreKitInternal.BasePresenter {
    void accountStore;
    void appStateController;
    void appStateControllerReady;
    void canHidePurchases;
    void familyMember;
    void isRosettaAvailable;
    void mode;
    void observer;
    void purchaseHistory;
    void purchases;
    void purchasesContentModes;
    void showMacOSCompatibleIOSApps;
    void term;
    void updatedPurchases;
    void view;
}

- (void)handlePurchasesChanged;

@end
