
@interface SiriSharedUIContentPlatterSeparatorView : UIView {
    UIView * _backgroundView;
    UIView * _backgroundViewSmall;
    long long  _separatorType;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (void).cxx_destruct;
- (double)_scale;
- (void)_setupBackgroundView;
- (void)_setupBackgroundViewSmall;
- (id)backgroundView;
- (id)backgroundViewSmall;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)separatorType;
- (void)setBackgroundView:(id)arg1;
- (void)setBackgroundViewSmall:(id)arg1;
- (void)setSeparatorType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
