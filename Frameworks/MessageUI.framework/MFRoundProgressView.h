
@interface MFRoundProgressView : UIView {
    CAShapeLayer * _circleLayer;
    UIView * _contentView;
    CADisplayLink * _displayLink;
    double  _increaseRate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pieCenter;
    double  _pieRadius;
    double  _prevUpdateTimeInterval;
    double  _progress;
    double  _realProgress;
    CAShapeLayer * _sliceLayer;
    double  _uiProgress;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_startDisplayLink;
- (void)_stopDisplayLink;
- (void)_updateSubviews;
- (void)_updateUIProgress;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)resetProgress;
- (void)setPieRadius:(double)arg1;
- (void)setProgress:(double)arg1;
- (double)toRadian:(double)arg1;

@end
