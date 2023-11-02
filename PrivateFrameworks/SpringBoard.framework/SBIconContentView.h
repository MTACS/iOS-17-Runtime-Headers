
@interface SBIconContentView : UIView {
    UIView * _contentView;
    long long  _orientation;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOrientation:(long long)arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (id)preferredFocusEnvironments;
- (void)setContentView:(id)arg1;
- (void)setOrientation:(long long)arg1;

@end
