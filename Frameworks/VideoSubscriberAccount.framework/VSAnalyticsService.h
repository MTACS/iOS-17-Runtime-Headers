
@interface VSAnalyticsService : VSServiceListener <MTBaseEventDataProviderDelegate, VSAnalyticsServiceProtocol, VSManagedProfileConnectionObserver> {
    AMSBag * _bag;
    bool  _didBuddyComplete;
    NSMutableArray * _eventCache;
    NSObject<OS_dispatch_queue> * _eventQueue;
    MTMetricsKit * _mainMetricsKit;
    bool  _optedIn;
    VSPreferences * _preferences;
}

@property (nonatomic, retain) AMSBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didBuddyComplete;
@property (nonatomic, retain) NSMutableArray *eventCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTMetricsKit *mainMetricsKit;
@property bool optedIn;
@property (nonatomic, retain) VSPreferences *preferences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bag;
- (id)capacityData:(id)arg1;
- (id)capacityDataAvailable:(id)arg1;
- (id)capacityDisk:(id)arg1;
- (id)capacitySystem:(id)arg1;
- (id)capacitySystemAvailable:(id)arg1;
- (id)clientId:(id)arg1;
- (id)connection:(id)arg1;
- (bool)didBuddyComplete;
- (id)dsId:(id)arg1;
- (id)eventCache;
- (id)eventQueue;
- (id)hardwareModel:(id)arg1;
- (id)init;
- (id)isSignedIn:(id)arg1;
- (id)mainMetricsKit;
- (void)onBuddyComplete;
- (bool)optedIn;
- (id)pageUrl:(id)arg1;
- (id)pixelRatio:(id)arg1;
- (id)preferences;
- (void)profileConnectionSettingsChanged:(id)arg1;
- (void)publishMetricsKitEventWithData:(id)arg1;
- (void)recordFederatedPunchoutEventWithError:(id)arg1 metadata:(id)arg2;
- (void)recordMetricsCenterClickEventWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;
- (void)recordMetricsCenterEnterEventWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;
- (void)recordMetricsCenterExitEventWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;
- (void)recordMetricsCenterFlexibleEventWithName:(id)arg1 data:(id)arg2;
- (void)recordNowPlayingBrokenEventWithBundleID:(id)arg1;
- (id)resourceRevNum:(id)arg1;
- (id)screenHeight:(id)arg1;
- (id)screenWidth:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setDidBuddyComplete:(bool)arg1;
- (void)setEventCache:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setMainMetricsKit:(id)arg1;
- (void)setOptedIn:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (id)windowInnerHeight:(id)arg1;
- (id)windowInnerWidth:(id)arg1;
- (id)windowOuterHeight:(id)arg1;
- (id)windowOuterWidth:(id)arg1;
- (id)xpPostFrequency:(id)arg1;
- (id)xpSendMethod:(id)arg1;

@end
