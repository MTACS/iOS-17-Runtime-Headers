
@interface _ATXCoreAnalyticsMetric : NSObject {
    _ATXCoreAnalyticsDimensionSet * _dimensionSet;
}

@property (nonatomic, readonly) _ATXCoreAnalyticsDimensionSet *dimensionSet;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)coreAnalyticsDictionaryWithDimensions;
- (id)dimensionSet;
- (id)init;
- (id)initWithDimensions:(id)arg1;
- (void)logToCoreAnalytics;
- (id)metricName;

@end
