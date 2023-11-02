
@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode {
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 settings:(id)arg2 orientation:(long long)arg3;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;

@end
