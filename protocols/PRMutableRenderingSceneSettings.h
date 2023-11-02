
@protocol PRMutableRenderingSceneSettings <PRRenderingSceneSettings>

@required

- (long long)pr_content;
- (bool)pr_isFloatingLayerSnapshot;
- (bool)pr_isSnapshot;
- (long long)pr_mode;
- (unsigned long long)pr_previewContent;
- (NSArray *)pr_sceneAttachments;
- (void)pr_setContent:(long long)arg1;
- (void)pr_setFloatingLayerSnapshot:(bool)arg1;
- (void)pr_setMode:(long long)arg1;
- (void)pr_setPreviewContent:(unsigned long long)arg1;
- (void)pr_setSceneAttachments:(NSArray *)arg1;
- (void)pr_setSignificantEventsCounter:(unsigned long long)arg1;
- (void)pr_setSnapshot:(bool)arg1;
- (void)pr_setTitleAlignment:(unsigned long long)arg1;
- (void)pr_setUnlockProgress:(double)arg1;
- (void)pr_setUserTapEventWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)pr_setUserTapEventsCounter:(unsigned long long)arg1;
- (void)pr_setWakeSourceIsSwipeToUnlock:(bool)arg1;
- (unsigned long long)pr_significantEventsCounter;
- (unsigned long long)pr_titleAlignment;
- (double)pr_unlockProgress;
- (unsigned long long)pr_userTapEventsCounter;
- (struct CGPoint { double x1; double x2; })pr_userTapLocation;
- (bool)pr_wakeSourceIsSwipeToUnlock;

@end
