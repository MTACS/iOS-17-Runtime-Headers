
@interface PKCameraCaptureInstructionView : UIView {
    long long  _context;
    PKTableHeaderView * _headerView;
    UIButton * _primaryButton;
    UIScrollView * _scrollView;
    UIButton * _secondaryButton;
}

@property (nonatomic, retain) PKTableHeaderView *headerView;

- (void).cxx_destruct;
- (bool)hasSecondaryButton;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2 primaryAction:(id)arg3 primaryActionTitle:(id)arg4 secondaryAction:(id)arg5 secondaryActionTitle:(id)arg6;
- (bool)isBuddyiPad;
- (void)layoutSubviews;
- (void)removeSecondaryButton;
- (void)setHeaderView:(id)arg1;
- (void)setPrimaryButtonEnabled:(bool)arg1;
- (void)setPrimaryButtonHidden:(bool)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;
- (void)setSecondaryButtonTitle:(id)arg1;
- (void)setupHeaderView;
- (void)setupPrimaryButtonWithTitle:(id)arg1 action:(id)arg2;
- (void)setupScrollView;
- (void)setupSecondaryButtonWithTitle:(id)arg1 action:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
