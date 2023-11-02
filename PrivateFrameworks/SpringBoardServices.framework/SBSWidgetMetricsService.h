
@interface SBSWidgetMetricsService : NSObject {
    <SBSWidgetHostingEnvironmentMetricsProviding> * _metricsProvider;
}

@property (nonatomic, readonly) <SBSWidgetHostingEnvironmentMetricsProviding> *metricsProvider;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMetricsProvider:(id)arg1;
- (id)metricsProvider;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)previewMetricsSpecificationsForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationsForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)systemMetricsForWidget:(id)arg1;
- (id)systemMetricsForWidget:(id)arg1 inHostingEnvironment:(id)arg2;

@end
