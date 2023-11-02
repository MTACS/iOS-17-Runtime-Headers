
@protocol LAUIRenderLoopDelegate <NSObject>

@required

- (void)renderLoop:(LAUIRenderLoop *)arg1 drawAtTime:(double)arg2;

@optional

- (void)renderLoop:(LAUIRenderLoop *)arg1 didChangeEffectivePaused:(bool)arg2;
- (void)renderLoop:(LAUIRenderLoop *)arg1 didChangeRunnable:(bool)arg2;

@end
