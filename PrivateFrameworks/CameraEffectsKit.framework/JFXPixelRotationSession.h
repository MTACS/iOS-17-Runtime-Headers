
@interface JFXPixelRotationSession : NSObject {
    struct OpaqueVTPixelRotationSession { } * _imageRotationSession;
    bool  _mirror;
    JFXPixelBufferPool * _pixelBufferPool;
    int  _rotationCardinalAngle;
}

@property (nonatomic, readonly) bool mirror;
@property (nonatomic, retain) JFXPixelBufferPool *pixelBufferPool;
@property (nonatomic, readonly) int rotationCardinalAngle;

+ (void)JFX_rotateFrameSet:(inout id*)arg1 toOrientation:(long long)arg2 pixelRotationSession:(inout id*)arg3;
+ (void)rotateFrameSet:(inout id*)arg1 by:(int)arg2 mirror:(bool)arg3 pixelRotationSession:(inout id*)arg4;
+ (void)rotateFrameSetToDeviceOrientation:(inout id*)arg1 pixelRotationSession:(inout id*)arg2;
+ (void)rotateFrameSetToUIOrientation:(inout id*)arg1 pixelRotationSession:(inout id*)arg2;
+ (const struct __CFString { }*)toVTRotation:(int)arg1;

- (void).cxx_destruct;
- (void)JT_releaseImageRotationSession;
- (id)createRotatedFrameSet:(id)arg1;
- (struct __CVBuffer { }*)createRotatedPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)createRotatedPixelBuffer:(struct __CVBuffer { }*)arg1 using:(struct __CVBuffer { }*)arg2;
- (void)dealloc;
- (id)initWithRotation:(int)arg1 mirror:(bool)arg2;
- (bool)mirror;
- (id)pixelBufferPool;
- (int)rotationCardinalAngle;
- (void)setPixelBufferPool:(id)arg1;

@end
