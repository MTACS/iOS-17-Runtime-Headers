
@interface PRSPosterUpdateColorPayload : PRSPosterUpdatePayload <NSSecureCoding> {
    BSColor * _color;
}

@property (nonatomic, readonly) BSColor *color;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)rawValue;

@end
