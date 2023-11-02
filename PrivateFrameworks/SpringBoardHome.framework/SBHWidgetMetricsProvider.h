
@interface SBHWidgetMetricsProvider : NSObject <SBSWidgetMetricsProviding> {
    <SBHWidgetMetricsProviderDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHWidgetMetricsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)systemDefaultMetricsSpecification;
- (id)systemMetricsForFamily:(long long)arg1;
- (id)systemMetricsForWidget:(id)arg1;

@end
