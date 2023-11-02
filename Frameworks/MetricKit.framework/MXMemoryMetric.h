
@interface MXMemoryMetric : MXMetric {
    MXAverage * _averageSuspendedMemory;
    NSMeasurement * _peakMemoryUsage;
}

@property (readonly) MXAverage *averageSuspendedMemory;
@property (readonly) NSMeasurement *peakMemoryUsage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageSuspendedMemory;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2;
- (id)peakMemoryUsage;
- (id)toDictionary;

@end
