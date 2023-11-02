
@interface MFRoundedCornersStackView : UIStackView {
    double  _cornerRadius;
}

@property (nonatomic) double cornerRadius;

- (double)cornerRadius;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mf_addArrangedSubviews:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)updateRoundedCorners;

@end
