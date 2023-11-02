
@interface _UIPageIndicatorProgressView : UIView {
    UIView * _backgroundView;
    UIView * _filledView;
    _UIPageIndicatorView * _indicatorView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *filledView;
@property (nonatomic) _UIPageIndicatorView *indicatorView;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)filledView;
- (id)indicatorView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepare;
- (void)setIndicatorView:(id)arg1;

@end
