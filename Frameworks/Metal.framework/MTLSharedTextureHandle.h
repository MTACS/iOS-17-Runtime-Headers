
@interface MTLSharedTextureHandle : NSObject <NSSecureCoding> {
    struct MTLSharedTextureHandlePrivate { struct __IOSurface {} *x1; id x2; id x3; } * _priv;
}

@property (readonly) <MTLDevice> *device;
@property (readonly) NSString *label;

+ (bool)supportsSecureCoding;

- (unsigned int)createMachPort;
- (void)dealloc;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 label:(id)arg2;
- (id)initWithMachPort:(unsigned int)arg1;
- (struct __IOSurface { }*)ioSurface;
- (id)label;

@end
