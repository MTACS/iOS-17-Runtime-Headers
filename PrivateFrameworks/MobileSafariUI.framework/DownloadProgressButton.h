
@interface DownloadProgressButton : UIButton {
    SFProgressView * _progressView;
}

@property (nonatomic) double progress;
@property (nonatomic) bool showsProgressRing;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)setShowsProgressRing:(bool)arg1;
- (bool)showsProgressRing;

@end
