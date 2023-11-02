
@interface WFIconColorBackground : WFIconBackground {
    long long  _blendMode;
    WFColor * _color;
}

@property (nonatomic, readonly) long long blendMode;
@property (nonatomic, readonly) WFColor *color;

+ (id)clearBackground;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)blendMode;
- (id)color;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithColor:(id)arg1 blendMode:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
