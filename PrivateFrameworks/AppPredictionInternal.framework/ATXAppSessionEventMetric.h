
@interface ATXAppSessionEventMetric : _ATXCoreAnalyticsMetric {
    NSString * _appBundleId;
    NSNumber * _appCategory;
    double  _appSessionDuration;
    NSString * _interruptingAppBundleId;
    NSNumber * _interruptingAppCategory;
}

@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSNumber *appCategory;
@property (nonatomic, readonly) double appSessionDuration;
@property (nonatomic, readonly) NSString *interruptingAppBundleId;
@property (nonatomic, readonly) NSNumber *interruptingAppCategory;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)appCategory;
- (double)appSessionDuration;
- (id)coreAnalyticsDictionary;
- (id)initWithDimensions:(id)arg1 bundleId:(id)arg2 interruptingAppBundleId:(id)arg3 duration:(double)arg4;
- (id)interruptingAppBundleId;
- (id)interruptingAppCategory;
- (id)metricName;

@end
