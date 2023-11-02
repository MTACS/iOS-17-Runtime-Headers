
@interface PRRangeMeasurement : NSObject <NSCopying, NSSecureCoding> {
    double  _measurement;
    double  _uncertainty;
}

@property (nonatomic, readonly) double measurement;
@property (nonatomic, readonly) double uncertainty;

+ (id)measurementWithRange:(double)arg1 uncertainty:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(double)arg1 uncertainty:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)measurement;
- (double)uncertainty;

@end
