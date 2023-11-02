
@protocol SBSWidgetHostingEnvironmentMetricsProviding <SBSWidgetMetricsProviding>

@required

- (NSDictionary *)previewMetricsSpecificationsForBundleIdentifier:(NSString *)arg1;
- (NSDictionary *)previewMetricsSpecificationsForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1 inHostingEnvironment:(NSString *)arg2;

@end
