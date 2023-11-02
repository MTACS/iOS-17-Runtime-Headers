
@interface ARPlaneExtent : NSObject <NSSecureCoding> {
    float  _height;
    float  _rotationOnYAxis;
    float  _width;
}

@property (nonatomic) float height;
@property (nonatomic) float rotationOnYAxis;
@property (nonatomic) float width;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)rotationOnYAxis;
- (void)setHeight:(float)arg1;
- (void)setRotationOnYAxis:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;

@end
