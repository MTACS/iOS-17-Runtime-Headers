
@interface SBHighlightView : UIView {
    UIImageView * _highlight;
    double  _highlightAlpha;
    double  _highlightHeight;
}

@property (nonatomic, readonly) double highlightAlpha;
@property (nonatomic, readonly) double highlightHeight;

+ (id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2;
+ (id)imageCache;

- (void).cxx_destruct;
- (double)highlightAlpha;
- (double)highlightHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3;
- (void)layoutSubviews;

@end
