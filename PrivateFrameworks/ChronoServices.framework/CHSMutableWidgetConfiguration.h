
@interface CHSMutableWidgetConfiguration : CHSWidgetConfiguration

@property (nonatomic, copy) NSArray *containerDescriptors;
@property (nonatomic, copy) CHSWidgetMetricsSpecification *metricsSpecification;
@property (nonatomic, copy) NSSet *rateLimitPolicies;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContainerDescriptors:(id)arg1;
- (void)setMetricsSpecification:(id)arg1;
- (void)setRateLimitPolicies:(id)arg1;

@end
