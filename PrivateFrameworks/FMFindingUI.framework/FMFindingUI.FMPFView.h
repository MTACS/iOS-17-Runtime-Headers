
@interface FMFindingUI.FMPFView : UIView <ARSCNViewDelegate, ARSessionDelegate> {
    void backdropAlphaSpring;
    void backdropRGBAColorSprings;
    void backdropRGBAColorSpringsIntensity;
    void backdropSigmaSpring;
    void cameraGimbalNode;
    void config;
    void ecoModeObservation;
    void experienceType;
    void fmpfdelegate;
    void isConvergingBackdropShown;
    void lastAskedRadiusFactor;
    void lastAskedSprungRadiusFactor;
    void lastThermalState;
    void locationManager;
    void metalBGRABackdropMixerParameters;
    void metalBGRABackdropMixerPipelineState;
    void metalBGRANextTextureIndex;
    void metalBGRATextures;
    void metalCommandQueue;
    void metalDevice;
    void metalHasLoggedSetup;
    void metalProcessingQueue;
    void metalTextureCache;
    void ringView;
    void sceneIsRunning;
    void scnSceneView;
    void skScene;
    void skSceneView;
    void style;
    void useGreenBackdropBlurAndOpacity;
    void videoHelpers;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)renderer:(id)arg1 didAddNode:(id)arg2 forAnchor:(id)arg3;
- (void)renderer:(id)arg1 didRemoveNode:(id)arg2 forAnchor:(id)arg3;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 didUpdateNode:(id)arg2 forAnchor:(id)arg3;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)thermalStateDidChangeWithNotification:(id)arg1;

@end
