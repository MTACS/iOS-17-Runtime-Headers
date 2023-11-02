
@protocol FRCSynthesis <NSObject>

@required

- (void)allocateResources;
- (void)createFeaturesFromFirstImage:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 flowForward:(struct __CVBuffer { }*)arg3 flowBackward:(struct __CVBuffer { }*)arg4;
- (bool)framePipeline;
- (void)releaseFeatures;
- (void)releaseResources;
- (void)setFramePipeline:(bool)arg1;
- (void)setUsage:(long long)arg1;
- (bool)switchUsageTo:(long long)arg1;
- (struct __CVBuffer { }*)synthesizeFrameForTimeScale:(float)arg1 frameIndex:(unsigned long long)arg2;
- (struct __CVBuffer { }*)synthesizeFrameFromFirstImage:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 flowForward:(struct __CVBuffer { }*)arg3 flowBackward:(struct __CVBuffer { }*)arg4 timeScale:(float)arg5 frameIndex:(unsigned long long)arg6;
- (long long)usage;

@optional

- (int)flowLevel;
- (bool)linearSplatting;
- (void)setFlowLevel:(int)arg1;
- (void)setLinearSplatting:(bool)arg1;
- (void)setSynthesisMode:(unsigned long long)arg1;
- (void)setTemporalFiltering:(bool)arg1;
- (unsigned long long)synthesisMode;
- (bool)temporalFiltering;

@end
