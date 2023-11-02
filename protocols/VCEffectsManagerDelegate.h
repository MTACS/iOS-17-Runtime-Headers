
@protocol VCEffectsManagerDelegate <NSObject>

@required

- (bool)effectsApplied;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 imageData:(NSData *)arg3 processTime:(NSNumber *)arg4;
- (bool)faceMeshTrackingEnabled;
- (void)setEffectsApplied:(bool)arg1;
- (void)setFaceMeshTrackingEnabled:(bool)arg1;

@end
