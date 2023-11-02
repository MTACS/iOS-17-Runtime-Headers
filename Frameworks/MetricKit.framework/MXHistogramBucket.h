
@interface MXHistogramBucket : NSObject <NSSecureCoding> {
    unsigned long long  _bucketCount;
    NSMeasurement * _bucketEnd;
    NSMeasurement * _bucketStart;
    NSMeasurementFormatter * _histogramBucketFormatter;
}

@property (readonly) unsigned long long bucketCount;
@property (readonly) NSMeasurement *bucketEnd;
@property (readonly) NSMeasurement *bucketStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bucketCount;
- (id)bucketEnd;
- (id)bucketStart;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBucketStart:(id)arg1 bucketEnd:(id)arg2 bucketCount:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;

@end
