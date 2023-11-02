
@interface JFXDisparityAsMatte : JFXMatting {
    struct __CVPixelBufferPool { } * _alphaMattePool;
    struct __CVPixelBufferPool { } * _fixedPointBufferPool;
    struct __CVPixelBufferPool { } * _rotatedFPBufferPool;
    struct __CVPixelBufferPool { } * _scaledUpFPBufferPool;
}

+ (bool)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x1; double x2; })mattingDepthInputSize;

- (void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initForFrameSet:(id)arg1;

@end
