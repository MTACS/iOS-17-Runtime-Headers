
@interface SBDoNotDisturbMetric : NSObject <DNDStateUpdateListener, SBFAnalyticsBackendEventHandling> {
    SBFAnalyticsClient * _analyticsClient;
    DNDStateService * _dndStateService;
    bool  _doNotDisturbActive;
    NSString * _floatingBundleIdentifier;
    unsigned long long  _location;
    NSString * _primaryBundleIdentifier;
    NSString * _sideBundleIdentifier;
}

@property (nonatomic, readonly) SBFAnalyticsClient *analyticsClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DNDStateService *dndStateService;
@property (getter=isDoNotDisturbActive, nonatomic, readonly) bool doNotDisturbActive;
@property (nonatomic, copy) NSString *floatingBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long location;
@property (nonatomic, copy) NSString *primaryBundleIdentifier;
@property (nonatomic, copy) NSString *sideBundleIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;
- (id)analyticsClient;
- (void)dealloc;
- (id)dndStateService;
- (id)floatingBundleIdentifier;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;
- (id)initWithAnalyticsClient:(id)arg1;
- (id)initWithAnalyticsClient:(id)arg1 dndStateService:(id)arg2;
- (bool)isDoNotDisturbActive;
- (unsigned long long)location;
- (id)primaryBundleIdentifier;
- (bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;
- (void)setFloatingBundleIdentifier:(id)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setPrimaryBundleIdentifier:(id)arg1;
- (void)setSideBundleIdentifier:(id)arg1;
- (id)sideBundleIdentifier;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end
