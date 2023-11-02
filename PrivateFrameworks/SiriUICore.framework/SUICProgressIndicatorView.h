
@interface SUICProgressIndicatorView : UIView {
    UIImageView * _actionArrowImageView;
    LAUICheckmarkLayer * _checkmarkLayer;
    _SUICProgressRingLayer * _progressRingLayer;
    _SUICRingLayer * _shadowRingLayer;
}

@property (getter=isArrowVisible, nonatomic) bool arrowVisible;
@property (getter=isCheckmarkVisible, nonatomic) bool checkmarkVisible;
@property (getter=isDarkened, nonatomic) bool darkened;
@property (nonatomic) double progressValue;
@property (getter=isSpinning, nonatomic) bool spinning;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isArrowVisible;
- (bool)isCheckmarkVisible;
- (bool)isDarkened;
- (bool)isSpinning;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (double)progressValue;
- (void)setArrowVisible:(bool)arg1;
- (void)setArrowVisible:(bool)arg1 delay:(double)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setCheckmarkVisible:(bool)arg1;
- (void)setCheckmarkVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDarkened:(bool)arg1;
- (void)setDarkened:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setProgressValue:(double)arg1;
- (void)setProgressValue:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setRingColor:(id)arg1;
- (void)setRingLineWidth:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowLineWidth:(double)arg1;
- (void)setSpinning:(bool)arg1;

@end
