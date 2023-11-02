
@interface NewsUI2.FollowingNotificationsDataManager : NSObject <FCNewsletterSubscriptionObserver, FCUserInfoObserving> {
    void configurationManager;
    void delegate;
    void newsletterManager;
    void notificationService;
    void sportsOnboardingManager;
    void subscriptionService;
    void tagService;
}

- (void).cxx_destruct;
- (void)determineSystemNotificationSettingsStatus;
- (id)init;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangePuzzleNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeSportsTopicNotificationsEnabledState:(id)arg1 fromCloud:(bool)arg2;

@end
