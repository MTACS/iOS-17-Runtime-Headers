
@interface AppStoreKitInternal.RemotePersonalizationAppStateDataSource : NSObject {
    void accessQueue;
    void bag;
    void delegate;
    void expectedAppStates;
    void process;
    void registeredAdamIds;
    void urlSession;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didCompletePurchase:(id)arg1;
- (id)init;
- (void)registerPersonalizedAdamIds:(id)arg1;
- (void)storeAccountDidChange;

@end
