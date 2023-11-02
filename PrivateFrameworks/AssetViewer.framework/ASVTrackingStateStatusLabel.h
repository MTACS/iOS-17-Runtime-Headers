
@interface ASVTrackingStateStatusLabel : UIView {
    ASVBlurredBackgroundView * _blurredBackgroundView;
    long long  _controlStyle;
    UILabel * _label;
    NSLayoutConstraint * _viewWidthConstraint;
}

@property (nonatomic, retain) ASVBlurredBackgroundView *blurredBackgroundView;
@property (nonatomic) long long controlStyle;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSLayoutConstraint *viewWidthConstraint;

- (void).cxx_destruct;
- (id)blurredBackgroundView;
- (long long)controlStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 controlStyle:(long long)arg2;
- (id)label;
- (void)setBlurredBackgroundView:(id)arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setViewWidthConstraint:(id)arg1;
- (id)text;
- (id)viewWidthConstraint;

@end
