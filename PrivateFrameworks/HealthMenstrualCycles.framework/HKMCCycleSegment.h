
@interface HKMCCycleSegment : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    struct { 
        long long start; 
        long long duration; 
    }  _days;
    long long  _type;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } days;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) long long type;

+ (id)_fertileWindowSegmentWithDays:(struct { long long x1; long long x2; })arg1;
+ (id)_menstruationSegmentWithDays:(struct { long long x1; long long x2; })arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithType:(long long)arg1 days:(struct { long long x1; long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; })days;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
