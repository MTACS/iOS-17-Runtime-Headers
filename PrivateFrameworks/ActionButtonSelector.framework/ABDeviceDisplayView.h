
@interface ABDeviceDisplayView : UIView {
    bool  _isSilentModeEnabled;
    ABFloatSpringProperty * _islandHeight;
    CALayer * _islandLayer;
    long long  _islandMode;
    ABFloatSpringProperty * _islandShake1;
    ABFloatSpringProperty * _islandShake2;
    ABFloatSpringProperty * _islandWidth;
    ABFloatSpringProperty * _islandY;
    CAPackage * _package;
    CALayer * _ringerLayer;
    CAStateController * _ringerStateController;
    ABFloatSpringProperty * _ringerVisible;
}

- (void).cxx_destruct;
- (void)_resetSprings;
- (void)_setSilentModeEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_shake;
- (void)_toggleSilentMode;
- (void)_transitionIslandToCompact;
- (void)_transitionIslandToGrowing;
- (void)_transitionIslandToInert;
- (void)_transitionIslandToLarge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
