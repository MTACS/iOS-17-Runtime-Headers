
@interface GCDeviceLight : NSObject <NSSecureCoding> {
    GCColor * _color;
}

@property (nonatomic, copy) GCColor *color;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (void)setColor:(id)arg1;

@end
