
@interface PGStashView : UIView {
    PGBackdropView * _backdropView;
    double  _blurProgress;
    bool  _chevronsHidden;
    UIView * _darkTintView;
    bool  _isChevronShownLeft;
    UIImageView * _leftChevron;
    UIView * _lightTintView;
    UIImageView * _rightChevron;
    double  _stashedTabWidth;
}

@property (nonatomic) double blurProgress;
@property (nonatomic) double stashedTabWidth;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)blurProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutStashChevrons;
- (void)layoutSubviews;
- (void)resetChevronState;
- (void)setBlurProgress:(double)arg1;
- (void)setChevronHidden:(bool)arg1 left:(bool)arg2;
- (void)setStashedTabWidth:(double)arg1;
- (double)stashedTabWidth;

@end
