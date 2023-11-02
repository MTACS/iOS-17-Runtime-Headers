
@interface DBInCallWidgetMultiwayTitleButton : UIButton {
    UIView * _focusView;
    CPSMultilineLabel * _multilineTitleLabel;
}

@property (nonatomic, retain) UIView *focusView;
@property (nonatomic, retain) CPSMultilineLabel *multilineTitleLabel;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)multilineTitleLabel;
- (void)setFocusView:(id)arg1;
- (void)setMultilineTitleLabel:(id)arg1;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;

@end
