
@protocol SBSWidgetMetricsServiceServerInterface <NSObject>

@required

- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForBundleIdentifier:(NSString *)arg1;
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (NSDictionary<__NSString__><__CHSWidgetMetricsSpecification__> *)previewMetricsSpecificationsForBundleIdentifier:(NSString *)arg1;
- (NSDictionary<__NSString__><__CHSWidgetMetricsSpecification__> *)previewMetricsSpecificationsForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1 inHostingEnvironment:(NSString *)arg2;

@end
