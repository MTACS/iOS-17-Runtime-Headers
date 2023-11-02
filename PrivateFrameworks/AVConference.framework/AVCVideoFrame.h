
@interface AVCVideoFrame : NSObject {
    id  _delegate;
    struct __CVBuffer { } * _depthPixelBuffer;
    NSData * _effectsMetadata;
    NSData * _imageData;
    struct __CVBuffer { } * _pixelBuffer;
    float  _renderProcessTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) struct __CVBuffer { }*depthPixelBuffer;
@property (retain) NSData *effectsMetadata;
@property (retain) NSData *imageData;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property float renderProcessTime;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void)dealloc;
- (id)delegate;
- (struct __CVBuffer { }*)depthPixelBuffer;
- (id)effectsMetadata;
- (id)imageData;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 depthPixelBuffer:(struct __CVBuffer { }*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 imageData:(id)arg4 delegate:(id)arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 imageData:(id)arg3;
- (struct __CVBuffer { }*)pixelBuffer;
- (float)renderProcessTime;
- (void)setDepthPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setEffectsMetadata:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setRenderProcessTime:(float)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
