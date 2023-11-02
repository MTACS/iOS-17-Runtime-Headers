
@protocol PRRenderingSceneSettings <PRSceneSettings>

@required

- (long long)pr_adjustedLuminance;
- (long long)pr_content;
- (bool)pr_isFloatingLayerSnapshot;
- (bool)pr_isSnapshot;
- (long long)pr_mode;
- (unsigned long long)pr_previewContent;
- (NSArray *)pr_sceneAttachments;
- (unsigned long long)pr_significantEventsCounter;
- (unsigned long long)pr_titleAlignment;
- (double)pr_unlockProgress;
- (unsigned long long)pr_userTapEventsCounter;
- (struct CGPoint { double x1; double x2; })pr_userTapLocation;
- (bool)pr_wakeSourceIsSwipeToUnlock;

@end
