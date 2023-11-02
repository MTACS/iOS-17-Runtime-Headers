
@interface NewsAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver, FCCoreConfigurationObserving, FCNewsletterSubscriptionObserver, FCShortcutListObserving, FCSubscriptionObserving, FCUserInfoObserving, NSSNewsAnalyticsSessionManagerObserving> {
    void appExtensionCommunicator;
    void client;
    void cloudContext;
    void fsidProvider;
    void kind;
    void onboardingVersion;
    void sceneSessionIdentifier;
    void sessionManager;
    void sessionStartSource;
    void sessionURLManager;
    void tabiDataProvider;
    void tracker;
    void userEmbeddingDataProvider;
    void window;
}

@property (nonatomic, copy) NSString *sceneSessionIdentifier;

- (void).cxx_destruct;
- (void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)configurationManagerScienceExperimentFieldsDidChange:(id)arg1;
- (void)dealloc;
- (void)familySharingStatusDidChange:(id)arg1;
- (id)init;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)offerDidChange:(id)arg1;
- (void)pushContentEnvironmentData;
- (void)pushOrientationData;
- (void)pushSessionDataWithRegionIDs:(id)arg1 isSportsOnboarded:(bool)arg2;
- (void)pushUserSubscriptionContextData;
- (id)sceneSessionIdentifier;
- (void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2 url:(id)arg3;
- (void)sessionWillEndWithEndReason:(id)arg1;
- (void)sessionWillResignActive;
- (void)setSceneSessionIdentifier:(id)arg1;
- (void)shortcutList:(id)arg1 didAddShortcuts:(id)arg2 changedShortcuts:(id)arg3 removedShortcuts:(id)arg4;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;
- (void)userInfoDidChangeAdsUserID:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangePuzzleNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;

@end
