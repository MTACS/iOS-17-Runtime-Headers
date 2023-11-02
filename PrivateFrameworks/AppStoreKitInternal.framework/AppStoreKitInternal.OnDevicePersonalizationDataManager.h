
@interface AppStoreKitInternal.OnDevicePersonalizationDataManager : NSObject {
    void accountStore;
    void activeStoreAccount;
    void amsEngagement;
    void bag;
    void dataCacheAvailabilityConditionLock;
    void dataCacheBox;
    void requestQueue;
    void timeoutTimer;
}

- (void).cxx_destruct;
- (void)appEnteredWhileAppeared;
- (id)init;
- (void)storeAccountDidChange;

@end
