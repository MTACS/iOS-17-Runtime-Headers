
@interface JFXOverlayEffectTransforms : JFXTextEffectTransforms {
    JFXFaceTrackedEffectTransform * _faceTrackingTransform;
    PVTransformAnimation * _transformAnimation;
}

@property (nonatomic, copy) JFXFaceTrackedEffectTransform *faceTrackingTransform;
@property (nonatomic, copy) PVTransformAnimation *transformAnimation;

+ (id)transformsWithEffect:(id)arg1;
+ (id)transformsWithTransform:(id)arg1 transformAnimation:(id)arg2 faceTrackingTransform:(id)arg3;

- (void).cxx_destruct;
- (void)applyToEffect:(id)arg1;
- (id)faceTrackingTransform;
- (id)initWithEffect:(id)arg1;
- (id)initWithTransform:(id)arg1 transformAnimation:(id)arg2 faceTrackingTransform:(id)arg3;
- (void)setFaceTrackingTransform:(id)arg1;
- (void)setTransformAnimation:(id)arg1;
- (id)transformAnimation;

@end
