
@interface _UIFormSheetPresentationController : _UISheetPresentationController {
    double  _keyboardYOrigin;
    bool  _layoutStateShouldAvoidKeyboard;
}

+ (long long)_initialMode;

- (void)_changeLayoutModeToAvoidKeyboard:(bool)arg1 withOrigin:(double)arg2;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (bool)_shouldHideBottomCorner;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (bool)shouldSubscribeToKeyboardNotifications;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;

@end
