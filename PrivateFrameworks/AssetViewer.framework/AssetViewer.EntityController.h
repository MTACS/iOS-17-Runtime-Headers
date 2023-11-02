
@interface AssetViewer.EntityController : NSObject <ASVGestureDataSource, ASVTurntableGestureRecognizerDelegate, ASVUnifiedGestureRecognizerDelegate, ASVWorldGestureRecognizerDelegate> {
    void _assetNaturalSize;
    void _assetScaleToFitUnitBox;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessibilityAssetURL;
    void animationID;
    void animationManager;
    void currentTurntablePitch;
    void currentTurntableYaw;
    void debugBoundingBoxEntities;
    void debugVisualizationEntity;
    void delegate;
    void entity;
    void entityWorldPosistionRefreshGuard;
    void groundPlaneEntity;
    void initialAABB;
    void lastARFrameTimestampForMovement;
    void lastBoundingBox;
    void lastScreenPointForMovement;
    void levitationHeight;
    void physicsStateManager;
    void planeAnimator;
    void planeType;
    void projectPointHandler;
    void savedInlineModelToCameraTransform;
    void savedLevitationHeight;
    void savedViewToProj;
    void sceneUnderstandingState;
    void shadowPlaneEntity;
    void shouldDisableGesturesHandler;
    void shouldUseTightBoundsSPI;
    void trackedRaycast;
    void transformToCameraInObjectMode;
    void transformToWorldInARMode;
    void type;
    void verticalPlacementMarker;
    void worldGestureRecognizer;
}

@property (nonatomic, copy) NSURL *accessibilityAssetURL;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property (nonatomic) float levitationHeight;
@property (nonatomic, retain) ASVUnifiedGestureRecognizer *worldGestureRecognizer;

- (void).cxx_destruct;
- (id)accessibilityAssetURL;
- (void)assetHeadScreenPositionForScale:(float)arg1;
- (void)assetNaturalSize;
- (float)assetPitch;
- (float)assetScale;
- (float)assetScaleToFitUnitBox;
- (void)assetScreenPosition;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })assetTransform;
- (void)assetWorldPosition;
- (float)assetYaw;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateAssetScreenBoundingRectIn:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entityAccessibilityWrappers;
- (id)init;
- (float)levitationHeight;
- (void)rotateByDeltaYaw:(float)arg1 deltaPitch:(float)arg2;
- (void)scaleTo:(float)arg1 updateARScale:(bool)arg2;
- (bool)screenPointIsOnAsset;
- (void)setAccessibilityAssetURL:(id)arg1;
- (void)setLevitationHeight:(float)arg1;
- (void)setWorldGestureRecognizer:(id)arg1;
- (void)turntableGestureRecognizer:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2 deltaPitch:(float)arg3;
- (void)unifiedGestureRecognizer:(void *)arg1 doubleTappedAtScreenPoint:(void *)arg2 onAsset:(void *)arg3; // needs 3 arg types, found 2: id, bool
- (void)unifiedGestureRecognizer:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2;
- (void)unifiedGestureRecognizer:(id)arg1 scaledAssetToScale:(float)arg2;
- (void)unifiedGestureRecognizer:(void *)arg1 singleTappedAtScreenPoint:(void *)arg2 onAsset:(void *)arg3; // needs 3 arg types, found 2: id, bool
- (void)unifiedGestureRecognizerBeganRotation:(id)arg1;
- (void)unifiedGestureRecognizerBeganScaling:(id)arg1;
- (void)unifiedGestureRecognizerEndedRotation:(id)arg1;
- (void)unifiedGestureRecognizerEndedScaling:(id)arg1;
- (id)worldGestureRecognizer;
- (void)worldGestureRecognizer:(void *)arg1 decelerationTranslationDelta:(void *)arg2; // needs 2 arg types, found 1: id
- (void)worldGestureRecognizer:(void *)arg1 levitatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: id
- (void)worldGestureRecognizer:(void *)arg1 translatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: id
- (void)worldGestureRecognizerBeganLevitation:(id)arg1;
- (void)worldGestureRecognizerBeganTranslation:(id)arg1;
- (void)worldGestureRecognizerBeganTranslationDeceleration:(id)arg1;
- (void)worldGestureRecognizerEndedLevitation:(id)arg1;
- (void)worldGestureRecognizerEndedTranslation:(id)arg1;
- (void)worldGestureRecognizerEndedTranslationDeceleration:(id)arg1;

@end
