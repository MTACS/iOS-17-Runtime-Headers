
@interface PUTimeCodeOverlayView : UIView {
    double  _displayedTimeInterval;
    double  _frameRate;
    NSArray * _overlayConstraints;
    UIView * _timecodeBackgroundView;
    UILabel * _timecodeLabelView;
    UIView * _verticalLineView;
}

@property (nonatomic) double displayedTimeInterval;
@property (nonatomic) double frameRate;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (double)displayedTimeInterval;
- (double)frameRate;
- (void)setDisplayedTimeInterval:(double)arg1;
- (void)setFrameRate:(double)arg1;
- (void)updateTimeDisplay;

@end
