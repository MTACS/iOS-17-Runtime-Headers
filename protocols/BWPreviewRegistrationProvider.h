
@protocol BWPreviewRegistrationProvider <NSObject>

@required

- (void)allocateResourcesWithVideoFormat:(BWVideoFormat *)arg1 metalContext:(FigMetalContext *)arg2;
- (void)cleanupResources;
- (struct CGPoint { double x1; double x2; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3;
- (struct { struct { bool x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1[3]; })registerWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3 isMacroScene:(bool)arg4 macroTransitionType:(int)arg5;

@optional

- (struct CGPoint { double x1; double x2; })computeApproximateCorrectionForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCameraPortType:(NSString *)arg2 narrowerPixelBufferDimensions:(struct { int x1; int x2; })arg3 widerToNarrowerCameraScale:(double)arg4;

@end
