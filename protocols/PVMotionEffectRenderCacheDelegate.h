
@protocol PVMotionEffectRenderCacheDelegate <NSObject>

@required

- (bool)motionEffect:(PVMotionEffect *)arg1 propertiesDisableCache:(NSDictionary *)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4;
- (bool)motionEffect:(PVMotionEffect *)arg1 shouldInvalidateCachedRenderForProperty:(NSString *)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (NSSet *)motionEffectPropertyKeysThatInvalidateCachedRender:(PVMotionEffect *)arg1;

@end
