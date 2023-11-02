
@interface MXDiskIOMetric : MXMetric {
    NSMeasurement * _cumulativeLogicalWrites;
}

@property (readonly) NSMeasurement *cumulativeLogicalWrites;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeLogicalWrites;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeLogicalWritesMeasurement:(id)arg1;
- (id)toDictionary;

@end
