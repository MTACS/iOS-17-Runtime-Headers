
@interface SMGuidedWorkoutBackgroundView : UIView {
    void cornerRadius;
    void currentBounds;
    void gradientLayer;
    void imageView;
    void vignetteView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 WithMediaType:(id)arg2;
- (void)updateWithActiveAppearance:(long long)arg1;

@end
