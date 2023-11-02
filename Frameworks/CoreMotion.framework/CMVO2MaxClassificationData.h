
@interface CMVO2MaxClassificationData : NSObject <NSCopying, NSSecureCoding> {
    long long  _ageLowerBound;
    long long  _ageUpperBound;
    long long  _biologicalSex;
    long long  _classificationType;
    double  _vo2MaxLowerBound;
    double  _vo2MaxUpperBound;
}

@property (nonatomic, readonly) long long ageLowerBound;
@property (nonatomic, readonly) long long ageUpperBound;
@property (nonatomic, readonly) long long biologicalSex;
@property (nonatomic, readonly) long long classificationType;
@property (nonatomic, readonly) double vo2MaxLowerBound;
@property (nonatomic, readonly) double vo2MaxUpperBound;

+ (bool)supportsSecureCoding;

- (long long)ageLowerBound;
- (long long)ageUpperBound;
- (long long)biologicalSex;
- (long long)classificationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBiologicalSex:(long long)arg1 ageLowerBound:(long long)arg2 ageUpperBound:(long long)arg3 classificationType:(long long)arg4 vo2MaxLowerBound:(double)arg5 vo2MaxUpperBound:(double)arg6;
- (id)initWithCoder:(id)arg1;
- (double)vo2MaxLowerBound;
- (double)vo2MaxUpperBound;

@end
