
@interface SBSABackgroundBlurPreferencesProvider : SBSABasePreferencesProvider {
    SBSAInterfaceElementPropertyIdentity * _animatingBlurFrameProperty;
    long long  _backgroundBlurState;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForVariableBlurUnderContainerViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 offscreen:(bool)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)preferencesFromContext:(id)arg1;

@end
