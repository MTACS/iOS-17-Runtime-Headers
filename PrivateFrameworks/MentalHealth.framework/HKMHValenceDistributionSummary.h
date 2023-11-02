
@interface HKMHValenceDistributionSummary : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    long long  _countDaily;
    long long  _countMomentary;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSArray * _valenceDistributions;
}

@property (nonatomic, readonly) long long countDaily;
@property (nonatomic, readonly) long long countMomentary;
@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) long long totalSampleCount;
@property (nonatomic, readonly) NSArray *valenceDistributions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countDaily;
- (long long)countMomentary;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayIndexRange:(struct { long long x1; long long x2; })arg1 valenceDistributions:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)totalSampleCount;
- (id)valenceDistributions;

@end
