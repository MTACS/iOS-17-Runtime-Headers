
@interface NewsUI2.SportsOnboardingManager : NSObject <FCAppleAccountObserver, FCUserInfoObserving> {
    void featureAvailability;
    void lastOnboardingState;
    void observers;
    void pushNotificationDataManager;
    void sportsSyncManager;
    void subscriptionService;
    void tagService;
    void userInfo;
}

- (void).cxx_destruct;
- (void)appleAccountChanged;
- (void)dealloc;
- (id)init;
- (void)userInfoDidChangeSportsOnboardingState:(id)arg1;
- (void)userInfoDidChangeSportsSyncState:(id)arg1;

@end
