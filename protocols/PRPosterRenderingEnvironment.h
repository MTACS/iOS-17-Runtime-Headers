
@protocol PRPosterRenderingEnvironment <PRPosterEnvironment>

@required

- (<PRPosterAmbientEnvironment> *)ambientEnvironment;
- (bool)andromeda;
- (double)backlightProgress;
- (<PRPosterContents> *)contents;
- (struct CGSize { double x1; double x2; })desiredContentSize;
- (bool)isLowLuminance;
- (bool)isParallaxEnabled;
- (bool)isPreview;
- (bool)isSnapshot;
- (double)linearBacklightProgress;
- (struct CGSize { double x1; double x2; })minimumContentSize;
- (unsigned long long)titleAlignment;
- (double)unlockProgress;
- (bool)wakeSourceIsSwipeToUnlock;

@end
