
@protocol PRUISwitcherSceneSettings

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
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })prui_trailingTopButtonFrame;

@end
