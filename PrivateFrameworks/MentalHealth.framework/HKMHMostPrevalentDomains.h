
@interface HKMHMostPrevalentDomains : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    HKMHDomainSummary * _mostPleasantDomains;
    HKMHDomainSummary * _mostUnpleasantDomains;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (nonatomic, readonly) HKMHDomainSummary *mostPleasantDomains;
@property (nonatomic, readonly) HKMHDomainSummary *mostUnpleasantDomains;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMostUnpleasantDomains:(id)arg1 mostPleasantDomains:(id)arg2 dayIndexRange:(struct { long long x1; long long x2; })arg3;
- (bool)isEqual:(id)arg1;
- (id)mostPleasantDomains;
- (id)mostUnpleasantDomains;

@end
