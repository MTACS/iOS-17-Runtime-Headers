
@interface _UIFindNavigatorViewLayout_Mac : _UIFindNavigatorViewLayout {
    UIView * _doneButtonSpacer;
    UIStackView * _findStackView;
    UIStackView * _firstLineControlsStackView;
    NSLayoutConstraint * _lineEqualWidthsConstraint;
    UISegmentedControl * _nextPreviousSegmentedControl;
    UISegmentedControl * _replaceReplaceAllSegmentedControl;
    UIStackView * _replaceStackView;
    UISwitch * _replaceToggleSwitch;
    UIStackView * _secondLineControlsStackView;
    UIStackView * _verticalStackView;
}

@property (nonatomic, retain) UISegmentedControl *nextPreviousSegmentedControl;
@property (nonatomic, retain) UISegmentedControl *replaceReplaceAllSegmentedControl;
@property (nonatomic, retain) UISwitch *replaceToggleSwitch;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nextPreviousSegmentedControl;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)prepareForLayout;
- (id)replaceReplaceAllSegmentedControl;
- (id)replaceToggleSwitch;
- (void)setNextPreviousSegmentedControl:(id)arg1;
- (void)setReplaceFieldVisible:(bool)arg1;
- (void)setReplaceReplaceAllSegmentedControl:(id)arg1;
- (void)setReplaceToggleSwitch:(id)arg1;
- (bool)showsReplaceInOptionsMenu;

@end
