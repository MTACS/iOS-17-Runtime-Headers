
@interface CPSNavigationAlertProgressView : UIView {
    double  _duration;
    UIView * _progressView;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) UIView *progressView;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)progressView;
- (void)setDuration:(double)arg1;
- (void)setProgressView:(id)arg1;

@end
