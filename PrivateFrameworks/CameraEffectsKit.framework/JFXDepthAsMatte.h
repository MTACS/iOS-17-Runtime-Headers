
@interface JFXDepthAsMatte : JFXMatting {
    struct __CVPixelBufferPool { } * _alphaPool;
    struct __CVPixelBufferPool { } * _rotatedFBufferPool;
    struct __CVPixelBufferPool { } * _scaledUpFBufferPool;
}

+ (bool)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x1; double x2; })mattingDepthInputSize;

- (void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)initForFrameSet:(id)arg1;

@end
