
@interface PVMotionEffectHitAreaComponent : PVMotionEffectComponent <PVEffectHitArea>

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (id)hitAreaPointsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;

@end
