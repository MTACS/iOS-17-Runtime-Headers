
@interface NewsUI2.PaidBundleBackgroundWorkerManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void backgroundFetchManager;
    void bundleSubscriptionManager;
    void registeredWorkers;
    void workerFactory;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
