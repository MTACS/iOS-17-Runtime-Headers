
@interface NewsUI2.MagazineSectionsInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void dataManager;
    void delegate;
    void magazinesBadgingCoordinator;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
