
@protocol REMLMetricsProvider

@required

- (NSString *)name;
- (void)reset;
- (void)updateMetricsFromFeatures:(id <MLFeatureProvider>)arg1 prediction:(id <MLFeatureProvider>)arg2 truth:(id <MLFeatureProvider>)arg3;

@end
