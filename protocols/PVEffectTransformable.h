
@protocol PVEffectTransformable

@required

- (bool)bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (PVMatrix44Double *)cameraProjection;
- (PVMatrix44Double *)cameraTransform;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })cornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;
- (void)disableCameraOverride;
- (void)enableCameraOverride:(PVMatrix44Double *)arg1 projection:(PVMatrix44Double *)arg2;
- (bool)isCameraOverrideEnabled;
- (void)setTopLevelGroupTransform:(PVMatrix44Double *)arg1;
- (void)setTransform:(PVMatrix44Double *)arg1;
- (PVMatrix44Double *)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (PVMatrix44Double *)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;

@end
