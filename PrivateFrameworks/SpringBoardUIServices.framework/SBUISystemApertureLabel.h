
@interface SBUISystemApertureLabel : UILabel {
    NSString * _pendingText;
    UIColor * _pendingTextColor;
}

- (void).cxx_destruct;
- (void)_animateLayer:(id)arg1 andSetValueForKeyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (struct CGSize { double x1; double x2; })_sizeOfLabelWithNewText:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_springAnimationForKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)performTextSwapAnimationWithText:(id)arg1 textColor:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 sizeWillChangeBlock:(id /* block */)arg4 didSetPropertiesBlock:(id /* block */)arg5;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;

@end
