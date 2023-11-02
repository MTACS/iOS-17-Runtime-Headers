
@interface PCNativeBorderStyle : NSObject <NSSecureCoding> {
    PCNativeColor * _color;
    double  _cornerRadius;
    double  _width;
}

@property (nonatomic, retain) PCNativeColor *color;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
