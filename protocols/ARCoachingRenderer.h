
@protocol ARCoachingRenderer <NSObject>

@required

- (double)currentAnimationTime;
- (void)drawWithTimeDelta:(double)arg1 drawable:(id <CAMetalDrawable>)arg2 commandBuffer:(id <MTLCommandBuffer>)arg3;
- (id)initWithLayer:(CAMetalLayer *)arg1 device:(id <MTLDevice>)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(int)arg4 deviceMaskImage:(UIImage *)arg5;
- (void)prepareWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetAnimationTime:(double)arg1;
- (void)resizeIfNeeded:(id <CAMetalDrawable>)arg1;
- (void)setOrientationAngle:(float)arg1;
- (ARCoachingGlyphState *)state;

@end
