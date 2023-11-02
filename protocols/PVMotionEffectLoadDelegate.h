
@protocol PVMotionEffectLoadDelegate <NSObject>

@required

- (void)motionEffect:(PVMotionEffect *)arg1 didBecomeReady:(const void*)arg2 properties:(NSDictionary *)arg3;
- (void)motionEffect:(PVMotionEffect *)arg1 didLoad:(const void*)arg2;
- (void)motionEffect:(PVMotionEffect *)arg1 willOpenMedia:(const void*)arg2 properties:(NSDictionary *)arg3;
- (void)motionEffect:(PVMotionEffect *)arg1 willRender:(const void*)arg2 properties:(NSDictionary *)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)motionEffectDidFailToLoad:(PVMotionEffect *)arg1;
- (void)motionEffectDidStartLoading:(PVMotionEffect *)arg1;
- (void)motionEffectDidUnload:(PVMotionEffect *)arg1;

@end
