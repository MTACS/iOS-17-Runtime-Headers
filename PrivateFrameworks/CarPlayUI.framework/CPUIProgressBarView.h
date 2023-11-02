
@interface CPUIProgressBarView : UIView {
    UIView * _overallBarView;
    double  _progress;
    UIView * _progressBarView;
}

@property (nonatomic, retain) UIColor *barColor;
@property (nonatomic, retain) UIView *overallBarView;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIView *progressBarView;
@property (nonatomic, retain) UIColor *trackColor;

- (void).cxx_destruct;
- (id)barColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overallBarView;
- (double)progress;
- (id)progressBarView;
- (void)setBarColor:(id)arg1;
- (void)setOverallBarView:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressBarView:(id)arg1;
- (void)setTrackColor:(id)arg1;
- (id)trackColor;

@end
