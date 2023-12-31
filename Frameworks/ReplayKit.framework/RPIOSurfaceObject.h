
@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } * _ioSurface;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __IOSurface { }*)ioSurface;
- (void)setIOSurface:(struct __IOSurface { }*)arg1;

@end
