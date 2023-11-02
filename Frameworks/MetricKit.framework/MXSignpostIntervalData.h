
@interface MXSignpostIntervalData : NSObject <NSSecureCoding> {
    MXAverage * _averageMemory;
    NSMeasurement * _cumulativeCPUTime;
    NSMeasurement * _cumulativeHitchTimeRatio;
    NSMeasurement * _cumulativeLogicalWrites;
    MXHistogram * _histogrammedSignpostDuration;
    NSMeasurementFormatter * _measurementFormatter;
}

@property (readonly) MXAverage *averageMemory;
@property (readonly) NSMeasurement *cumulativeCPUTime;
@property (readonly) NSMeasurement *cumulativeHitchTimeRatio;
@property (readonly) NSMeasurement *cumulativeLogicalWrites;
@property (readonly) MXHistogram *histogrammedSignpostDuration;
@property (retain) NSMeasurementFormatter *measurementFormatter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageMemory;
- (id)cumulativeCPUTime;
- (id)cumulativeHitchTimeRatio;
- (id)cumulativeLogicalWrites;
- (void)encodeWithCoder:(id)arg1;
- (id)histogrammedSignpostDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4;
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4 withCumulativeHitchTimeRatio:(id)arg5;
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withPeakMemory:(id)arg3 withAverageMemory:(id)arg4 withCumulativeLogicalWrites:(id)arg5;
- (id)measurementFormatter;
- (void)setMeasurementFormatter:(id)arg1;
- (id)toDictionary;

@end
