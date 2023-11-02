
@interface CFXRenderer : NSObject <PVLivePlayerDelegate> {
    UIColor * _animojiBackgroundColor;
    JFXAnimojiEffectRenderer * _animojiRenderer;
    long long  _cameraMode;
    PVLivePlayerCameraSource * _cameraSource;
    long long  _captureMode;
    <CFXRendererDelegate> * _delegate;
    JTFrameRateCalculator * _fpsCalc;
    PVLivePlayer * _livePlayer;
    JFXMetadataValidator * _metadataValidator;
    JFXPixelRotationSession * _pixelRotationSession;
}

@property (nonatomic, retain) UIColor *animojiBackgroundColor;
@property (nonatomic, retain) JFXAnimojiEffectRenderer *animojiRenderer;
@property (nonatomic, readonly) long long cameraMode;
@property (nonatomic, retain) PVLivePlayerCameraSource *cameraSource;
@property (nonatomic) long long captureMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) JTFrameRateCalculator *fpsCalc;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PVLivePlayer *livePlayer;
@property (nonatomic, readonly) bool livePlayerIsSaturated;
@property (nonatomic, retain) JFXMetadataValidator *metadataValidator;
@property (nonatomic, retain) JFXPixelRotationSession *pixelRotationSession;
@property (readonly) Class superclass;

+ (struct __CVBuffer { }*)createBufferWith:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (id)CFX_JTEffectsFromCFXEffectComposition:(id)arg1 forRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)CFX_PVFrameSetFromCFXFrame:(id)arg1;
- (id)CFX_getPreviewColorSpace;
- (id)animojiBackgroundColor;
- (id)animojiRenderer;
- (id)buildRenderRequest:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (long long)cameraMode;
- (id)cameraSource;
- (long long)captureMode;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (id)fpsCalc;
- (id)initWithDelegate:(id)arg1 captureMode:(long long)arg2;
- (id)livePlayer;
- (void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)livePlayerIsSaturated;
- (id)metadataValidator;
- (void)pause;
- (id)pixelRotationSession;
- (void)renderFrame:(id)arg1 effectComposition:(id)arg2;
- (void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(bool)arg3;
- (void)resetMetadataValidation;
- (void)resume;
- (void)setAnimojiBackgroundColor:(id)arg1;
- (void)setAnimojiRenderer:(id)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLivePlayer:(id)arg1;
- (void)setMetadataValidator:(id)arg1;
- (void)setPixelRotationSession:(id)arg1;
- (void)setTrackingLossDelegate:(id)arg1;
- (void)shutdown;
- (void)willDropCameraFrame;

@end
