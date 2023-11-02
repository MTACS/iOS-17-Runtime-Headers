
@interface REIOSurfaceTexturePayload : RESharedResourcePayload {
    IOSurface * _ioSurface;
    unsigned long long  _pixelFormat;
    unsigned long long  _planeIndex;
}

@property (nonatomic, readonly) IOSurface *ioSurface;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long planeIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSameUnderlyingIOSurface:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurface:(id)arg1 plane:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3;
- (id)ioSurface;
- (unsigned long long)pixelFormat;
- (unsigned long long)planeIndex;
- (id)redactedDescription;

@end
