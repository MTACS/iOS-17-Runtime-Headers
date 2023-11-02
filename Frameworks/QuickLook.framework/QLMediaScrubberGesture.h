
@interface QLMediaScrubberGesture : UIPanGestureRecognizer {
    double  _estimatedFrameRate;
    float  _maximumValue;
    float  _minimumValue;
    AVPlayer * _player;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTouchLocationInView;
    <QLMediaScrubberGestureDelegate> * _scrubberDelegate;
    bool  _shouldRecoverFromPrecisionScrubbingIfNeeded;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startTouchLocationInView;
    float  _value;
}

@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (nonatomic) <QLMediaScrubberGestureDelegate> *scrubberDelegate;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (float)clampedEstimatedFrameRate;
- (id)initWithPlayer:(id)arg1;
- (float)maximumValue;
- (float)minimumValue;
- (float)nominalFrameRate;
- (void)scrubbGestureDidChange:(id)arg1;
- (id)scrubberDelegate;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setScrubberDelegate:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
