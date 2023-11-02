
@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {
    NSMutableDictionary * metricsIndex;
    NSMutableSet * metricsSet;
}

- (void).cxx_destruct;
- (bool)addMetrics:(id)arg1;
- (id)getMetricsByName:(id)arg1;
- (id)init;
- (id)name;
- (void)reset;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;

@end
