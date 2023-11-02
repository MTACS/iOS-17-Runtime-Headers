
@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination> {
    CPAnalytics * _cpAnalyticsInstance;
}

@property (nonatomic, readonly) NSArray *allErrorProperties;
@property (nonatomic, readonly) NSArray *allMediaProperties;
@property (nonatomic, readonly) NSArray *allStandardProperties;
@property (nonatomic, readonly) CPAnalytics *cpAnalyticsInstance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allErrorProperties;
- (id)allMediaProperties;
- (id)allStandardProperties;
- (id)buildCoreAnalyticsEventPayloadWithProperties:(id)arg1 fromSourceEvent:(id)arg2 intoTargetEventPayload:(id)arg3;
- (id)cpAnalyticsInstance;
- (id)init;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (bool)isMediaEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (void)reportMalformedEvent:(id)arg1 malformationDescriptionWithFormat:(id)arg2;
- (void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)arg1 fromSourceEvent:(id)arg2 payload:(id)arg3;
- (void)updateWithConfig:(id)arg1;

@end
