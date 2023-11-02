
@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination> {
    NSMapTable * _eventRoutes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) NSMapTable *eventRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2;
- (id)_eventRoutesFromConfig:(id)arg1;
- (id)eventRoutes;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;
- (void)sendCoreAnalyticsEventWithCustomConfig:(id)arg1 eventRoute:(id)arg2;
- (void)updateWithConfig:(id)arg1;

@end
