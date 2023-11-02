
@interface SPColorWrapper : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _color;
}

@property (nonatomic, readonly) UIColor *color;

+ (bool)supportsSecureCoding;
+ (id)wrapperForColor:(id)arg1;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
