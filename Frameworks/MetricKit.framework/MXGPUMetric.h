
@interface MXGPUMetric : MXMetric {
    NSMeasurement * _cumulativeGPUTime;
}

@property (readonly) NSMeasurement *cumulativeGPUTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeGPUTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeGPUTimeMeasurement:(id)arg1;
- (id)toDictionary;

@end
