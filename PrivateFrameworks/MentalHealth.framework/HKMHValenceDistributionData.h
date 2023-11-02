
@interface HKMHValenceDistributionData : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    double  _maximumValence;
    double  _minimumValence;
    long long  _reflectiveInterval;
    long long  _sampleCount;
}

@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) double maximumValence;
@property (nonatomic, readonly) double minimumValence;
@property (nonatomic, readonly) long long reflectiveInterval;
@property (nonatomic, readonly) long long sampleCount;

+ (bool)supportsSecureCoding;

- (void)addValenceDistribution:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumValence:(double)arg1 maximumValence:(double)arg2 sampleCount:(long long)arg3 reflectiveInterval:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (double)maximumValence;
- (double)minimumValence;
- (long long)reflectiveInterval;
- (long long)sampleCount;

@end
