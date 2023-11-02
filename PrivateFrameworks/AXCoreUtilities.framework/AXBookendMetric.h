
@interface AXBookendMetric : AXMetric <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)endMeasurement;
- (void)startMeasurement;

@end
