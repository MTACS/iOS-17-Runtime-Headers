
@interface MUCircleProgressView : UIView {
    CAShapeLayer * _borderLayer;
    UIImageView * _imageView;
    bool  _indeterminate;
    CAShapeLayer * _indeterminateLayer;
    id /* block */  _primaryAction;
    double  _progress;
    CAShapeLayer * _progressLayer;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, retain) UIImage *image;
@property (getter=isIndeterminate, nonatomic) bool indeterminate;
@property (nonatomic, copy) id /* block */ primaryAction;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_startIndeterminateAnimation;
- (void)_updateBorderWidthForUpdatedDisplayScale;
- (void)_updateStrokeColorForUpdatedUserInterfaceStyle;
- (void)didMoveToWindow;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isIndeterminate;
- (void)layoutSubviews;
- (id /* block */)primaryAction;
- (double)progress;
- (void)setImage:(id)arg1;
- (void)setIndeterminate:(bool)arg1;
- (void)setPrimaryAction:(id /* block */)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;

@end
