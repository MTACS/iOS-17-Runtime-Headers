
@interface DCCircularProgressView : UIView {
    CAShapeLayer * _circleLayer;
    NSProgress * _observedProgress;
    double  _progress;
}

@property (nonatomic, retain) CAShapeLayer *circleLayer;
@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)circleLayer;
- (void)dealloc;
- (struct CGPath { }*)newPathForProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedProgress;
- (double)progress;
- (void)setCircleLayer:(id)arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setProgress:(double)arg1;

@end
