
@interface PSPointerAccessory : NSObject <NSCopying, NSSecureCoding> {
    double  _angle;
    double  _offset;
    bool  _orientationMatchesAngle;
    PSPointerShape * _shape;
}

@property (nonatomic) double angle;
@property (nonatomic) double offset;
@property (nonatomic) bool orientationMatchesAngle;
@property (nonatomic, copy) PSPointerShape *shape;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)angle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (bool)orientationMatchesAngle;
- (void)setAngle:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setOrientationMatchesAngle:(bool)arg1;
- (void)setShape:(id)arg1;
- (id)shape;

@end
