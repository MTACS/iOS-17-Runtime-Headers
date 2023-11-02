
@interface SFProgressView : UIView {
    double  _progress;
    SFRingView * _progressRing;
    double  _radius;
    UIView * _rectangularFillView;
    long long  _style;
    SFRingView * _trackRing;
    double  _trackWidth;
}

@property (nonatomic) double progress;
@property (nonatomic) double radius;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *trackTintColor;
@property (nonatomic) double trackWidth;

- (void).cxx_destruct;
- (void)_updateRectangularProgressFill;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)progress;
- (double)radius;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setRadius:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTrackTintColor:(id)arg1;
- (void)setTrackWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)trackTintColor;
- (double)trackWidth;

@end
