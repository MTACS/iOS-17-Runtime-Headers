
@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (nonatomic, readonly, copy) NSMutableDictionary *alternatesByFamily;
@property (nonatomic, readonly, copy) NSMutableDictionary *metricsByFamily;

- (id)_initWithMetricsByFamily:(id)arg1 alternates:(id)arg2;
- (id)alternatesByFamily;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)metricsByFamily;
- (void)setAlternateMetrics:(id)arg1 forFamily:(long long)arg2;
- (void)setMetrics:(id)arg1 forFamily:(long long)arg2;

@end
