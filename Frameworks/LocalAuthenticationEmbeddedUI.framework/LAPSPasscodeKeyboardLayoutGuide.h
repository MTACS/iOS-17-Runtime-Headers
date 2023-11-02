
@interface LAPSPasscodeKeyboardLayoutGuide : UILayoutGuide {
    NSLayoutConstraint * _keyboardLayoutHeightLC;
}

- (void).cxx_destruct;
- (double)_defaultHeightConstant;
- (void)_handleKeyboardFrameChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_owningViewFrameInWindowCoordinates;
- (void)_setupKeyboardObservers;
- (void)_updateKeyboardLayoutGuide:(id)arg1 animated:(bool)arg2;
- (id)initWithView:(id)arg1;

@end
