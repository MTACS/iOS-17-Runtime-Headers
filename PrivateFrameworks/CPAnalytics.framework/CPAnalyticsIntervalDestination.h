
@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination {
    NSSet * _ignoredIntervalNames;
    NSSet * _trackedIntervalNames;
}

@property (nonatomic, retain) NSSet *ignoredIntervalNames;
@property (nonatomic, retain) NSSet *trackedIntervalNames;

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1 withUnknownIntervalName:(id)arg2;
- (id)_intervalNamesForKey:(id)arg1 inConfiguration:(id)arg2;
- (id)ignoredIntervalNames;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;
- (void)sendDashboardIntervalEventForEvent:(id)arg1;
- (void)setIgnoredIntervalNames:(id)arg1;
- (void)setTrackedIntervalNames:(id)arg1;
- (id)trackedIntervalNames;
- (void)updateWithConfig:(id)arg1;

@end
