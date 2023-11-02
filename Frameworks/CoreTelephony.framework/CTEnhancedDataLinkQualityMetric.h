
@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric {
    long long  _metricType;
}

@property (nonatomic) long long metricType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 enhancedLinkQuality:(id)arg2;
- (long long)metricType;
- (void)setMetricType:(long long)arg1;

@end
