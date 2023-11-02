
@interface _UIFindNavigatorViewLayout_iPad : _UIFindNavigatorViewLayout {
    UIStackView * _contentStackView;
    UIStackView * _textFieldsStackView;
}

- (void).cxx_destruct;
- (void)_setAndActivateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForLayout;
- (void)setReplaceFieldVisible:(bool)arg1;

@end
