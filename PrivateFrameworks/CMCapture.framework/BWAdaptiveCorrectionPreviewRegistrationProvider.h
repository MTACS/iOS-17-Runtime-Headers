
@interface BWAdaptiveCorrectionPreviewRegistrationProvider : NSObject <BWPreviewRegistrationProvider> {
    BWAdaptiveCorrectionPreviewRegistration * _registration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)allocateResourcesWithVideoFormat:(id)arg1 metalContext:(id)arg2;
- (void)cleanupResources;
- (struct CGPoint { double x1; double x2; })computeApproximateCorrectionForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCameraPortType:(id)arg2 narrowerPixelBufferDimensions:(struct { int x1; int x2; })arg3 widerToNarrowerCameraScale:(double)arg4;
- (struct CGPoint { double x1; double x2; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)arg1 excludeStaticComponentFromAlignmentShifts:(bool)arg2;
- (struct { struct { bool x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1[3]; })registerWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3 isMacroScene:(bool)arg4 macroTransitionType:(int)arg5;

@end
