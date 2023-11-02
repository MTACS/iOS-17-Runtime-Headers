
@interface HKMCHeartStatistics : NSObject <NSCopying, NSSecureCoding> {
    double  _percentileQuantityValue;
    long long  _sampleCount;
}

@property (nonatomic, readonly) double percentileQuantityValue;
@property (nonatomic, readonly) long long sampleCount;

+ (id)heartStatisticsFromStatistics:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPercentileQuantityValue:(double)arg1 sampleCount:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (double)percentileQuantityValue;
- (long long)sampleCount;

@end
