
@interface HKRollingBaselineConfiguration : NSObject <NSSecureCoding> {
    long long  _maximumSampleCount;
    double  _maximumWindowDuration;
    long long  _minimumSampleCount;
    long long  _options;
}

@property (nonatomic, readonly) long long maximumSampleCount;
@property (nonatomic, readonly) double maximumWindowDuration;
@property (nonatomic, readonly) long long minimumSampleCount;
@property (nonatomic, readonly) long long options;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumSampleCount:(long long)arg1 maximumSampleCount:(long long)arg2 maximumWindowDuration:(double)arg3 options:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)maximumSampleCount;
- (double)maximumWindowDuration;
- (long long)minimumSampleCount;
- (long long)options;

@end
