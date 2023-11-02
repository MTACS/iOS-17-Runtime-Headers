
@interface _UIPageIndicatorImageView : UIImageView {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    _UIPageIndicatorView * _indicatorView;
}

@property (nonatomic) _UIPageIndicatorView *indicatorView;

- (void)_updateSymbolConfiguration;
- (id)indicatorView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (void)prepare;
- (void)setImage:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForImage:(id)arg1 traits:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
