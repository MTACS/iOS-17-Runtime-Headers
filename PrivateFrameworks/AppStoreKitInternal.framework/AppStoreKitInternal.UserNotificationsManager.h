
@interface AppStoreKitInternal.UserNotificationsManager : _TtCs12_SwiftObject {
    void accountStore;
    void activeStoreAccount;
    void bag;
    void cacheService;
    void cacheServiceAccessQueue;
    void cachedAppEventIdsBox;
    void notificationCenterAccessQueue;
    void objectGraph;
    void rootViewController;
    void userAddedAppEventIdsBox;
    void userRemovedAppEventIdsBox;
}

- (void)appEnteredWhileAppeared;
- (void)cacheDidUpdate;
- (void)storeAccountDidChange;

@end
