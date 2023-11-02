
@interface MKVibrantView : UIVisualEffectView {
    long long  _style;
}

@property (nonatomic) long long style;

- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
