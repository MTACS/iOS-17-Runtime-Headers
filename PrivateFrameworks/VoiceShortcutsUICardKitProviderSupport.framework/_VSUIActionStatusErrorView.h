
@interface _VSUIActionStatusErrorView : UIView {
    UIView * _errorIconBackgroundView;
    UIImageView * _errorIconView;
    UILabel * _errorLabel;
}

@property (nonatomic, retain) UIView *errorIconBackgroundView;
@property (nonatomic, retain) UIImageView *errorIconView;
@property (nonatomic, retain) UILabel *errorLabel;

- (void).cxx_destruct;
- (void)_setUpViews;
- (id)errorIconBackgroundView;
- (id)errorIconView;
- (id)errorLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setErrorIconBackgroundView:(id)arg1;
- (void)setErrorIconView:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
