
@interface AppStoreKitInternal.UnifiedTabBadgingManager : NSObject <ASDAppStoreChangedObserver> {
    void appStoreBadgingService;
    void rootActionHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)service:(id)arg1 didAddBadges:(id)arg2;
- (void)service:(id)arg1 didRemoveBadges:(id)arg2;

@end
