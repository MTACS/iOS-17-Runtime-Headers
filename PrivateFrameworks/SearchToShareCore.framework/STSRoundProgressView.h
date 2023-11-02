
@interface STSRoundProgressView : UIView {
    double  __contentsScale;
    STSProgressArcLayer * __progressArcLayer;
    CAShapeLayer * _circleLayer;
    double  _increaseRate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pieCenter;
    double  _pieRadius;
    NSDate * _prevUpdateTime;
    double  _progress;
    NSTimer * _progressTimer;
    double  _realProgress;
    CAShapeLayer * _sliceLayer;
    long long  _style;
    double  _uiProgress;
}

@property (setter=_setContentsScale:, nonatomic) double _contentsScale;
@property (setter=_setProgressArcLayer:, nonatomic, retain) STSProgressArcLayer *_progressArcLayer;
@property (nonatomic) double progress;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (double)_contentsScale;
- (id)_progressArcLayer;
- (void)_setContentsScale:(double)arg1;
- (void)_setProgressArcLayer:(id)arg1;
- (void)_setupSubviews;
- (void)_updateSublayersContentsScale;
- (void)_updateUIProgress;
- (void)didMoveToWindow;
- (void)increaseUIProgress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (double)progress;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)resetProgress;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)setPieRadius:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (long long)style;
- (double)toRadian:(double)arg1;

@end
