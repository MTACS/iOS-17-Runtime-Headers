
@interface _UIFindNavigatorViewLayout_iPhone : _UIFindNavigatorViewLayout {
    NSLayoutConstraint * _doneSpaceConstraint;
    UIStackView * _findStackView;
    UIView * _nextPrevSpacerView;
    UIStackView * _nextPrevStackView;
    NSLayoutConstraint * _replaceButtonWidthConstraint;
    UIStackView * _replaceStackView;
    UIStackView * _verticalStackView;
}

@property (nonatomic, readonly) bool usesSmallScreenStyle;

- (void).cxx_destruct;
- (void)_setAndActivateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredVerticalStackViewFrame;
- (void)prepareForLayout;
- (void)setReplaceFieldVisible:(bool)arg1;
- (bool)usesSmallScreenStyle;

@end
