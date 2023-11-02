
@protocol PRUIMutableSwitcherSceneSettings <PRUISwitcherSceneSettings>

@required

- (bool)prui_isLockPosterComplicationRowHidden;
- (bool)prui_isLockPosterFloatingLayerInlined;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })prui_leadingTopButtonFrame;
- (unsigned int)prui_lockPosterLiveContentLayerContextID;
- (unsigned long long)prui_lockPosterLiveContentLayerRenderID;
- (unsigned int)prui_lockPosterLiveFloatingLayerContextID;
- (unsigned long long)prui_lockPosterLiveFloatingLayerRenderID;
- (unsigned int)prui_lockPosterOverlayLayerContextID;
- (unsigned long long)prui_lockPosterOverlayLayerRenderID;
- (BSUIVibrancyConfiguration *)prui_lockVibrancyConfiguration;
- (unsigned long long)prui_preferredSwitcherLayoutMode;
- (void)prui_setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prui_setLockPosterComplicationRowHidden:(bool)arg1;
- (void)prui_setLockPosterFloatingLayerInlined:(bool)arg1;
- (void)prui_setLockPosterLiveContentLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterLiveContentLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockPosterLiveFloatingLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterLiveFloatingLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockPosterOverlayLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterOverlayLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockVibrancyConfiguration:(BSUIVibrancyConfiguration *)arg1;
- (void)prui_setPreferredSwitcherLayoutMode:(unsigned long long)arg1;
- (void)prui_setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })prui_trailingTopButtonFrame;

@end
