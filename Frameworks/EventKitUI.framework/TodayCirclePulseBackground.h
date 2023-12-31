
@interface TodayCirclePulseBackground : UIView {
    double  _roundedRectCornerRadius;
    bool  _usesRoundedRectInsteadOfCircle;
}

@property (nonatomic) double roundedRectCornerRadius;
@property (nonatomic) bool usesRoundedRectInsteadOfCircle;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)roundedRectCornerRadius;
- (void)setRoundedRectCornerRadius:(double)arg1;
- (void)setUsesRoundedRectInsteadOfCircle:(bool)arg1;
- (bool)usesRoundedRectInsteadOfCircle;

@end
