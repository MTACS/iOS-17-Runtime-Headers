
@protocol PKRenderLoopDelegate <NSObject>

@required

- (void)renderLoop:(PKRenderLoop *)arg1 drawAtTime:(double)arg2;

@optional

- (void)renderLoop:(PKRenderLoop *)arg1 didChangeEffectivePaused:(bool)arg2;
- (void)renderLoop:(PKRenderLoop *)arg1 didChangeRunnable:(bool)arg2;

@end
