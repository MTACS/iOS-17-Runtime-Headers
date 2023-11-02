
@interface AVTAvatarEnvironment : NSObject {
    SCNNode * _animojiCamera;
    SCNNode * _arModeCamera;
    AVTAvatar * _avatar;
    SCNNode * _customCamera;
    SCNNode * _defaultLightingNode;
    SCNNode * _defaultPointOfView;
    SCNNode * _environmentNode;
    NSString * _framingMode;
    SCNNode * _memojiCameraGroup;
    <SCNSceneRenderer> * _renderer;
    SCNScene * _scene;
    SCNMaterial * _shadowPlaneMaterial;
    SCNNode * _specializedLightingNode;
    SCNNode * _trackingLostIndicator;
    bool  _trackingLostIndicatorVisible;
    SCNNode * _whitePlane;
}

@property (nonatomic, readonly) SCNNode *currentPointOfView;
@property (nonatomic, readonly) SCNNode *defaultPointOfView;
@property (nonatomic, readonly) SCNNode *environmentNode;
@property (nonatomic, readonly) bool faceIsFullyVisible;
@property (nonatomic) float fadeFactor;
@property (nonatomic, copy) NSString *framingMode;
@property (nonatomic) bool showReticle;

- (void).cxx_destruct;
- (void)avatarDidChange:(id)arg1 presentationConfiguration:(id)arg2;
- (void)configureARCameraForFaceTracking;
- (void)configureARCameraForReticle;
- (id)currentPointOfView;
- (id)defaultEnvironmentNode;
- (id)defaultPointOfView;
- (void)didSnapshot;
- (id)environmentNode;
- (bool)faceIsFullyVisible;
- (float)fadeFactor;
- (id)framingMode;
- (void)hideTrackingLossIndicator;
- (id)initAndInstallInScene:(id)arg1 renderer:(id)arg2;
- (id)pointOfViewForFramingMode:(id)arg1;
- (void)setEnablePhysicsSimulation:(bool)arg1;
- (void)setFadeFactor:(float)arg1;
- (void)setFramingMode:(id)arg1;
- (void)setFramingModeForcingPointOfViewUpdate:(id)arg1;
- (void)setShowReticle:(bool)arg1;
- (bool)showReticle;
- (void)showTrackingLossIndicator;
- (void)updateCustomCameras;
- (void)updatePointOfViewFromFramingMode;
- (void)updateSpecializedLighting;
- (void)updateWithPresentationConfiguration:(id)arg1;
- (void)willSnapshot;

@end
