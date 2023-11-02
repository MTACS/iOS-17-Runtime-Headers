
@interface _UISearchControllerLimitedAccessView : UIView {
    UIButton * _backButton;
    UIView * _backgroundView;
    UILabel * _keyboardLimitedLabel;
}

@property (nonatomic, retain) UIButton *backButton;

- (void).cxx_destruct;
- (id)backButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackButton:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;

@end
