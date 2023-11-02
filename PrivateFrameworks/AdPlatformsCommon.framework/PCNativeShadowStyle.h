
@interface PCNativeShadowStyle : NSObject <NSSecureCoding> {
    PCNativeColor * _color;
    NSArray * _offsets;
    double  _opacity;
    double  _radius;
}

@property (nonatomic, retain) PCNativeColor *color;
@property (nonatomic, retain) NSArray *offsets;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)offsets;
- (double)opacity;
- (double)radius;
- (void)setColor:(id)arg1;
- (void)setOffsets:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;

@end
