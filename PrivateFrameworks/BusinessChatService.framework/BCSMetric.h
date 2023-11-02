
@interface BCSMetric : NSObject {
    id  _context;
    long long  _metricType;
    NSArray * _postProcessingMetricHandlers;
}

@property (nonatomic, readonly) long long metricType;

+ (bool)isUsingExpensiveNetwork;

- (void).cxx_destruct;
- (long long)metricType;
- (void)submitForPostProcessing;

@end
