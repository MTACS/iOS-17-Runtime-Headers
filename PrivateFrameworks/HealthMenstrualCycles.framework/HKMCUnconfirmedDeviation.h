
@interface HKMCUnconfirmedDeviation : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    NSDictionary * _analyticsMetadata;
    struct { 
        long long start; 
        long long duration; 
    }  _days;
    long long  _type;
}

@property (nonatomic, readonly) NSDictionary *analyticsMetadata;
@property (nonatomic, readonly) struct { long long x1; long long x2; } days;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; })days;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 days:(struct { long long x1; long long x2; })arg2 analyticsMetadata:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
