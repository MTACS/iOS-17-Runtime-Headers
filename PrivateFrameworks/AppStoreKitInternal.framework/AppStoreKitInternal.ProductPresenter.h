
@interface AppStoreKitInternal.ProductPresenter : AppStoreKitInternal.BasePresenter {
    void appStateController;
    void completeMyBundleController;
    void currentBetaBundleVersion;
    void currentlyObservedAdamId;
    void didAskToBuy;
    void fullProduct;
    void fullProductFetchedAction;
    void hasBeenPurchasedForReviewsContainer;
    void isFetchingShelves;
    void isLocalApplicationForAppEvents;
    void isMediaExpanded;
    void isPurchased;
    void numberOfActiveRequests;
    void pageRefreshPolicy;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  productUrl;
    void purchaseHistory;
    void restrictions;
    void shouldDisplayBetaBanner;
    void sidepackedProduct;
    void view;
}

- (void)restrictionsDidChange:(id)arg1;

@end
