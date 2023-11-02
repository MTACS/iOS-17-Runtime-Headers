
@interface HMMutableClientContext : HMClientContext

@property (nonatomic, retain) NSString *metricIdentifier;

+ (id)clientContextWithMetricIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMetricIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
