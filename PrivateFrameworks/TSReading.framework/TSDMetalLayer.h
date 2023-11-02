
@interface TSDMetalLayer : CAMetalLayer {
    <MTLCommandQueue> * _commandQueue;
    NSObject<TSDMetalLayerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    bool  _isAnimationStopping;
    bool  _shouldSkipNextDisplayLink;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property NSObject<TSDMetalLayerDelegate> *delegate;
@property (nonatomic) bool shouldSkipNextDisplayLink;

- (void).cxx_destruct;
- (id)commandQueue;
- (id)delegate;
- (id)device;
- (void)displayAtCurrentLayerTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isOpaque:(bool)arg2 isWideGamut:(bool)arg3 delegate:(id)arg4 metalDevice:(id)arg5;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)p_performWorkOnMainThread:(id /* block */)arg1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setShouldSkipNextDisplayLink:(bool)arg1;
- (bool)shouldSkipNextDisplayLink;
- (void)startAnimation;
- (void)stopAnimation;
- (void)tearDown;

@end
