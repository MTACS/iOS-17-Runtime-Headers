
@interface UIStatusBar_Placeholder : UIStatusBar_Base

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(bool)arg3 inWindow:(id)arg4 isAzulBLinked:(bool)arg5;

- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 wantsServer:(bool)arg3 inProcessStateProvider:(id)arg4;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(bool)arg6;
- (void)_setHidden:(bool)arg1 animationParameters:(id)arg2;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;

@end
