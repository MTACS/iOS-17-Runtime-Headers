
@interface MXCPUMetric : MXMetric {
    NSMeasurement * _cumulativeCPUInstructions;
    NSMeasurement * _cumulativeCPUTime;
}

@property (readonly) NSMeasurement *cumulativeCPUInstructions;
@property (readonly) NSMeasurement *cumulativeCPUTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeCPUInstructions;
- (id)cumulativeCPUTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeCPUTimeMeasurement:(id)arg1;
- (id)initWithCumulativeCPUTimeMeasurement:(id)arg1 withCumulativeCPUInstructions:(id)arg2;
- (id)initWithCumulativeCPUTimeMeasurement:(id)arg1 withCumulativeCPUInstructions:(id)arg2 withCumulativeForegroundCPUTimeMeasurement:(id)arg3 withCumulativeBackgroundCPUTimeMeasurement:(id)arg4;
- (id)toDictionary;

@end
