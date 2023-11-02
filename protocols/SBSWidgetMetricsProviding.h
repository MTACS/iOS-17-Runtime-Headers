
@protocol SBSWidgetMetricsProviding <NSObject>

@required

- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForBundleIdentifier:(NSString *)arg1;
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1;

@end
