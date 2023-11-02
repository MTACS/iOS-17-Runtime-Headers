
@interface WFAQIScaleGradientStop : NSObject <NSCopying, NSSecureCoding> {
    NSString * _color;
    float  _location;
}

@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) float location;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(float)arg1 color:(id)arg2;
- (float)location;

@end
