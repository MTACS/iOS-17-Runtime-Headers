
@interface HMINMSConfiguration : HMFObject {
    NSNumber * _metricDefault;
    NSDictionary * _metricWithLabels;
    NSNumber * _thresholdDefault;
    NSDictionary * _thresholdWithLabels;
}

@property (readonly) NSNumber *metricDefault;
@property (readonly) NSDictionary *metricWithLabels;
@property (readonly) NSNumber *thresholdDefault;
@property (readonly) NSDictionary *thresholdWithLabels;

- (void).cxx_destruct;
- (id)initWithThresholdWithLabels:(id)arg1 metricWithLabels:(id)arg2 thresholdDefault:(id)arg3 metricDefault:(id)arg4;
- (id)metricDefault;
- (long long)metricForLabel:(id)arg1;
- (id)metricWithLabels;
- (id)thresholdDefault;
- (id)thresholdForLabel:(id)arg1;
- (id)thresholdWithLabels;

@end
