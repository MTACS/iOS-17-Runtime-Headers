
@interface LPCircularProgressIndicator : UIView {
    CAShapeLayer * _borderLayer;
    double  _progress;
    CAShapeLayer * _progressLayer;
    LPCircularProgressIndicatorStyle * _style;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)initWithHost:(id)arg1 style:(id)arg2;
- (void)layoutSubviews;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)updatePaths;

@end
