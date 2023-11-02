
@interface MXAverage : NSObject <NSSecureCoding> {
    NSMeasurement * _averageMeasurement;
    NSMeasurementFormatter * _averageMeasurementFormatter;
    long long  _sampleCount;
    double  _standardDeviation;
}

@property (readonly) NSMeasurement *averageMeasurement;
@property (readonly) long long sampleCount;
@property (readonly) double standardDeviation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageMeasurement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4;
- (id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3;
- (long long)sampleCount;
- (double)standardDeviation;
- (id)toDictionary;

@end
