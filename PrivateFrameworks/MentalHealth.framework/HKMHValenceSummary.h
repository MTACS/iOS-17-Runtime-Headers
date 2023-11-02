
@interface HKMHValenceSummary : NSObject <NSCopying, NSSecureCoding> {
    long long  _countNeutral;
    long long  _countPleasant;
    long long  _countUnpleasant;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
}

@property (nonatomic) long long countNeutral;
@property (nonatomic) long long countPleasant;
@property (nonatomic) long long countUnpleasant;
@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (nonatomic, readonly) long long totalCount;

+ (bool)supportsSecureCoding;

- (void)_addValence:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countNeutral;
- (long long)countPleasant;
- (long long)countUnpleasant;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountPleasant:(long long)arg1 countNeutral:(long long)arg2 countUnpleasant:(long long)arg3 dayIndexRange:(struct { long long x1; long long x2; })arg4;
- (id)initWithDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setCountNeutral:(long long)arg1;
- (void)setCountPleasant:(long long)arg1;
- (void)setCountUnpleasant:(long long)arg1;
- (long long)totalCount;

@end
