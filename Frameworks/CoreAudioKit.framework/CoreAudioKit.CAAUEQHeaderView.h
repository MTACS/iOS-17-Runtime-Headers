
@interface CoreAudioKit.CAAUEQHeaderView : UIView <UITextFieldDelegate> {
    void appleLogo;
    void auAbbreviatedName;
    void auLabel;
    void auName;
    void border;
    void compressedHorizontalLayout;
    void paramStack;
    void params;
    void viewConstraints;
    void viewSetup;
}

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)beginTouchWithNotification:(id)arg1;
- (void)didMoveToSuperview;
- (void)endTouchWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)textFieldEditingDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)tintColorDidChange;

@end
