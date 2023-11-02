
@interface SUUIOnboardingCircleView : UIView {
    UIImageView * _backgroundImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    UIColor * _fillColor;
    double  _minimumDiameter;
    UILabel * _titleLabel;
    long long  _titlePosition;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic) double minimumDiameter;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) long long titlePosition;

- (void).cxx_destruct;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)minimumDiameter;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageAlpha:(double)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setMinimumDiameter:(double)arg1;
- (void)setTitlePosition:(long long)arg1;
- (id)titleLabel;
- (long long)titlePosition;

@end