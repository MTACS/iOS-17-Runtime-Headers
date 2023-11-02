
@interface CPActivityAuthorizationManager : NSObject <CPConversationManagerDataSourceObserver> {
    void $__lazy_storage_$_neighborhoodActivityConduit;
    void appPolicyManager;
    void audioRoutePolicyManager;
    void dataSource;
    void featureFlags;
    void isDisplayingAuthorizationRequest;
    void lock;
    void notificationCenter;
    void preparedAuthorizedBundleIdentifiers;
    void queue;
}

@property (nonatomic, retain) TUNeighborhoodActivityConduit *neighborhoodActivityConduit;

+ (id)notificationDisplayInformationForAudioPolicyManager:(id)arg1 activity:(id)arg2 conversation:(id)arg3;

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;
- (id)init;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2 appPolicyManager:(id)arg3;
- (id)neighborhoodActivityConduit;
- (void)requestAuthorizationForApplicationLaunchWithActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAuthorizationForApplicationWithBundleIdentifier:(id)arg1 preparing:(bool)arg2 overrides:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAuthorization:(bool)arg1 forBundleIdentifier:(id)arg2;
- (void)setNeighborhoodActivityConduit:(id)arg1;

@end
