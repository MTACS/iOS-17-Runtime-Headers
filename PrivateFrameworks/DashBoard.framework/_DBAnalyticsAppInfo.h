
@interface _DBAnalyticsAppInfo : _DBAnalyticsTimeAccumulator {
    DBApplicationInfo * _appInfo;
    NSString * _bundleIdentifier;
    unsigned long long  _category;
    unsigned long long  _dashboardWidgetType;
    unsigned long long  _numberOfSiriPresentations;
    bool  _wasVisibleBeforeCarScreen;
    bool  _wasVisibleBeforeSiri;
    bool  _wasVisibleInDashboardBeforeCarScreen;
}

@property (nonatomic, readonly) DBApplicationInfo *appInfo;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic) unsigned long long dashboardWidgetType;
@property (nonatomic) unsigned long long numberOfSiriPresentations;
@property (nonatomic) bool wasVisibleBeforeCarScreen;
@property (nonatomic) bool wasVisibleBeforeSiri;
@property (nonatomic) bool wasVisibleInDashboardBeforeCarScreen;

- (void).cxx_destruct;
- (id)appInfo;
- (id)bundleIdentifier;
- (unsigned long long)category;
- (unsigned long long)dashboardWidgetType;
- (id)debugDescription;
- (id)initWithAppInfo:(id)arg1 policyEvaluator:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 appDeclaration:(id)arg2 policyEvaluator:(id)arg3;
- (unsigned long long)numberOfSiriPresentations;
- (void)setDashboardWidgetType:(unsigned long long)arg1;
- (void)setNumberOfSiriPresentations:(unsigned long long)arg1;
- (void)setWasVisibleBeforeCarScreen:(bool)arg1;
- (void)setWasVisibleBeforeSiri:(bool)arg1;
- (void)setWasVisibleInDashboardBeforeCarScreen:(bool)arg1;
- (void)startCountingDashboardVisibleTime;
- (void)startCountingVisibleTime;
- (void)stopCountingDashboardVisibleTime;
- (void)stopCountingVisibleTime;
- (bool)wasVisibleBeforeCarScreen;
- (bool)wasVisibleBeforeSiri;
- (bool)wasVisibleInDashboardBeforeCarScreen;

@end
