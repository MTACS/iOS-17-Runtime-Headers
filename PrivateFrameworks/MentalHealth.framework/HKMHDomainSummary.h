
@interface HKMHDomainSummary : NSObject <NSCopying, NSSecureCoding> {
    long long  _count;
    NSArray * _domains;
    long long  _totalSampleCount;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSArray *domains;
@property (nonatomic, readonly) long long totalSampleCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomains:(id)arg1 count:(long long)arg2 totalSampleCount:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)totalSampleCount;

@end
