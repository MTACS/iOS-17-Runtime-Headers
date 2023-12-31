
@interface TSWPEffectsWindow : UIWindow {
    unsigned int  _activeEffectsCount;
    UITextView * _dummyToReclaimFirstResponder;
    bool  _readyToGo;
}

+ (id)sharedEffectsWindowAboveStatusBar;
+ (id)sharedEffectsWindowAboveStatusBarForView:(id)arg1;

- (bool)_canAffectStatusBarAppearance;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pDidChangeStatusBarOrientation:(id)arg1;
- (void)p_updateForOrientation:(long long)arg1;
- (void)willRemoveSubview:(id)arg1;

@end
