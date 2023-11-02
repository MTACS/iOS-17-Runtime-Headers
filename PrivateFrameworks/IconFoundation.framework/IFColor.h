
@interface IFColor : NSObject <NSSecureCoding> {
    CIColor * _ciColor;
    NSUUID * _digest;
}

@property (readonly) struct CGColor { }*cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (id)black;
+ (struct CGColorSpace { }*)deviceGreyColorSpace;
+ (struct CGColorSpace { }*)deviceRGBColorSpace;
+ (bool)supportsSecureCoding;
+ (id)white;

- (void).cxx_destruct;
- (id)_initWithColorStr:(id)arg1 appearance:(long long)arg2 contrast:(long long)arg3 vibrancy:(long long)arg4;
- (struct CGColor { }*)cgColor;
- (id)ciColor;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithSystemColor:(long long)arg1;
- (id)initWithSystemColor:(long long)arg1 appearance:(long long)arg2 contrast:(long long)arg3 vibrancy:(long long)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)isEqual:(id)arg1;

@end
