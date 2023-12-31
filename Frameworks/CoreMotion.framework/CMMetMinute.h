
@interface CMMetMinute : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * fAverageIntensity;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) NSNumber *averageIntensity;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)averageIntensity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSample:(struct CLMetMinute { double x1; double x2; })arg1;
- (id)initWithStartDate:(id)arg1 averageIntensity:(id)arg2;
- (id)startDate;

@end
