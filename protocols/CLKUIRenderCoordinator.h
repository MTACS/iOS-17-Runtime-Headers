
@protocol CLKUIRenderCoordinator <NSObject>

@required

- (void)invalidate;
- (bool)isPaused;
- (unsigned long long)preferredFramesPerSecond;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(unsigned long long)arg1;

@end
