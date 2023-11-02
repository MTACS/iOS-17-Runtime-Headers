
@interface ARAreaLight : NSObject <ARDaemonSecureCoding> {
    float  _angularSize;
    void _color;
    void _direction;
}

@property (nonatomic, readonly) float angularSize;
@property (nonatomic, readonly) void color;
@property (nonatomic, readonly) void direction;

+ (bool)supportsSecureCoding;

- (float)angularSize;
- (void)color;
- (void)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirection:(void *)arg1 angularSize:(void *)arg2 color:(void *)arg3; // needs 3 arg types, found 1: float

@end
