
@interface PVMotionEffectComponent : PVEffectComponent <PVMotionEffectLoadDelegate, PVMotionEffectPropertyMapDelegate, PVMotionEffectRenderCacheDelegate> {
    PVMotionEffect * _motionEffect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PVMotionEffect *motionEffect;
@property (readonly) Class superclass;

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (void)effect:(id)arg1 updateProperties:(id)arg2 allProperties:(id)arg3;
- (id)initWithMotionEffect:(id)arg1;
- (id)motionEffect;
- (void)motionEffect:(id)arg1 didBecomeReady:(const void*)arg2 properties:(id)arg3;
- (void)motionEffect:(id)arg1 didLoad:(const void*)arg2;
- (bool)motionEffect:(id)arg1 propertiesDisableCache:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4;
- (bool)motionEffect:(id)arg1 shouldInvalidateCachedRenderForProperty:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)motionEffect:(id)arg1 willOpenMedia:(const void*)arg2 properties:(id)arg3;
- (void)motionEffect:(id)arg1 willRender:(const void*)arg2 properties:(id)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)motionEffectDidFailToLoad:(id)arg1;
- (void)motionEffectDidStartLoading:(id)arg1;
- (void)motionEffectDidUnload:(id)arg1;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg1;
- (void)setMotionEffect:(id)arg1;

@end
