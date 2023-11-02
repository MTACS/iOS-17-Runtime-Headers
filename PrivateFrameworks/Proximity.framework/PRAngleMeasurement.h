
@interface PRAngleMeasurement : NSObject <NSCopying, NSSecureCoding> {
    double  _measurement;
    double  _uncertainty;
}

@property (nonatomic, readonly) double measurement;
@property (nonatomic, readonly) double uncertainty;

+ (id)measurementWithAngle:(double)arg1 uncertainty:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAngle:(double)arg1 uncertainty:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)measurement;
- (double)uncertainty;

@end
