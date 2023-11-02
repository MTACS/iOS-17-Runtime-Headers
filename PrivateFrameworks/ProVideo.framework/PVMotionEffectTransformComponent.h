
@interface PVMotionEffectTransformComponent : PVMotionEffectComponent <PVEffectTransformable> {
    unsigned int  _cameraID;
    int  _cameraIDStatus;
    unsigned int  _top3DGroupID;
    int  _top3DGroupIDStatus;
}

- (bool)addCameraToDocumentOnce_NoLock:(const void*)arg1;
- (id)additionalTopLevelScaleInDictionary:(id)arg1 orInDefaultDictionary:(id)arg2;
- (id)applyAdditionalTopLevelScale:(struct CGPoint { double x1; double x2; })arg1 aroundPoint:(struct CGPoint { double x1; double x2; })arg2 toTransform:(id)arg3;
- (void)applyTransforms_NoLock:(id)arg1 defaultProperties:(id)arg2 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 documentInfo:(const void*)arg4;
- (bool)bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (id)cameraProjection;
- (id)cameraTransform;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })cornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;
- (void)disableCameraOverride;
- (bool)disableCameraOverride_NoLock:(const void*)arg1;
- (void)enableCameraOverride:(id)arg1 projection:(id)arg2;
- (bool)enableCameraOverride_NoLock:(const void*)arg1 transform:(id)arg2 projection:(id)arg3;
- (bool)encloseTopGroupIn3DGroupOnce_NoLock:(const void*)arg1;
- (id)initWithMotionEffect:(id)arg1;
- (bool)isCameraOverrideEnabled;
- (bool)isForceRenderAtPosterFrameEnabledInDictionary:(id)arg1 orInDefaultDictionary:(id)arg2;
- (void)motionEffect:(id)arg1 didBecomeReady:(const void*)arg2 properties:(id)arg3;
- (bool)motionEffect:(id)arg1 propertiesDisableCache:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4;
- (bool)motionEffect:(id)arg1 shouldInvalidateCachedRenderForProperty:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)motionEffect:(id)arg1 willRender:(const void*)arg2 properties:(id)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)motionEffectDidUnload:(id)arg1;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg1;
- (int)objectBounds_NoLock:(void*)arg1 objectID:(unsigned int)arg2 timelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5 documentInfo:(const void*)arg6;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })objectCorners_NoLock:(unsigned int)arg1 timelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5 documentInfo:(const void*)arg6;
- (id)objectToImageTransform_NoLock:(unsigned int)arg1 timelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flatten:(bool)arg4 includeTransformAnimation:(bool)arg5 documentInfo:(const void*)arg6;
- (bool)setCameraProjection_NoLock:(id)arg1 documentInfo:(const void*)arg2;
- (bool)setCameraTransform_NoLock:(id)arg1 documentInfo:(const void*)arg2;
- (void)setTopLevelGroupTransform:(id)arg1;
- (void)setTopLevelGroupTransform_NoLock:(id)arg1 documentInfo:(const void*)arg2;
- (void)setTransform:(id)arg1;
- (bool)setTransform_NoLock:(id)arg1 documentInfo:(const void*)arg2;
- (id)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (id)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })transformObjectCornersToImage_NoLock:(struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1 objectID:(unsigned int)arg2 timelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 flatten:(bool)arg5 documentInfo:(const void*)arg6;
- (id)transformObjectPointsToImage_NoLock:(id)arg1 objectID:(unsigned int)arg2 timelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 flatten:(bool)arg5 documentInfo:(const void*)arg6;

@end
