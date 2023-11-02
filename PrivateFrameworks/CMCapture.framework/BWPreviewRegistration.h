
@interface BWPreviewRegistration : NSObject {
    bool  _excludeStaticComponentFromAlignmentShifts;
    <MTLCommandQueue> * _metalCommandQueue;
    int  _previewRegistrationType;
    <BWPreviewRegistrationProvider> * _registrationProvider;
    NSObject<OS_dispatch_queue> * _registrationQueue;
}

@property (readonly) int previewRegistrationType;

+ (void)initialize;

- (void)allocateResourcesAsynchronouslyWithVideoFormat:(id)arg1;
- (void)cleanupResources;
- (struct CGPoint { double x1; double x2; })computeApproximateCorrectionForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCameraPortType:(id)arg2 narrowerPixelBufferDimensions:(struct { int x1; int x2; })arg3 widerToNarrowerCameraScale:(double)arg4;
- (struct CGPoint { double x1; double x2; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)arg1 sensorBinningFactor:(struct { int x1; int x2; })arg2 registrationType:(int)arg3 metalCommandQueue:(id)arg4 excludeStaticComponentFromAlignmentShifts:(bool)arg5;
- (int)previewRegistrationType;
- (void)registerWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3 isMacroScene:(bool)arg4 macroTransitionType:(int)arg5 completionHandler:(id /* block */)arg6;
- (void)waitForRegistrationToComplete;

@end
