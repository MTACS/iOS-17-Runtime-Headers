
@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {
    NSMutableDictionary * _actualAuthorizedServices;
    NSXPCConnection * _connection;
    NSMutableDictionary * _deniedServices;
    bool  _initialAuthNeeded;
    NSMutableDictionary * _lastModifiedTimes;
    NSMapTable * _listeners;
    NSNumber * _prerequisites;
    int  _registrationToken;
}

@property (readonly, copy) NSDictionary *authorizedServices;
@property (nonatomic) bool dataCollectionEnabled;
@property (nonatomic) bool firstRunOnboardingCompleted;
@property bool initialAuthNeeded;
@property (nonatomic, readonly) NSArray *legacyResearchStudyBundleIDs;
@property (nonatomic, readonly) NSString *legacyResearchStudyEntitlement;

+ (id)authClient;
+ (void)initialize;
+ (void)setAuthClient:(id)arg1;
+ (id)sharedInstance;

- (void)addListener:(id)arg1;
- (void)addListener:(id)arg1 forBundleId:(id)arg2;
- (id)authorizedServices;
- (void)authorizedServicesDidChange:(id)arg1 deniedServices:(id)arg2 prerequisites:(long long)arg3 lastModifiedTimes:(id)arg4 bundleIdentifier:(id)arg5;
- (bool)dataCollectionEnabled;
- (void)dealloc;
- (bool)firstRunOnboardingCompleted;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)initialAuthNeeded;
- (void)initialAuthorizationStateForBundleId:(id)arg1 authorizationState:(id /* block */)arg2;
- (void)invalidate;
- (id)legacyResearchStudyBundleIDs;
- (id)legacyResearchStudyEntitlement;
- (void)removeListener:(id)arg1;
- (void)reregisterAfterInterruption:(id)arg1 effectiveBundleId:(id)arg2;
- (void)setDataCollectionEnabled:(bool)arg1;
- (void)setFirstRunOnboardingCompleted:(bool)arg1;
- (void)setInitialAuthNeeded:(bool)arg1;

@end
