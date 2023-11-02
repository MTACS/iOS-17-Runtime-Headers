
@interface _UIDigitizerGestureRecognizerImp : NSObject {
    <_UIDigitizerGestureRecognizerImpDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    double  _lastRecognitionTime;
    double  _maximumPressDuration;
    double  _minimumPressDuration;
    NSTimer * _minimumPressDurationTimer;
    long long  _numberOfActiveTouches;
    double  _pressBeginTime;
    double  _pressEndTime;
    double  _pressEndToTouchBeginDuration;
    double  _touchEndTime;
    double  _touchEndToPressEndDuration;
    NSTimer * _waitingForTouchesAfterPressTimer;
}

@property (nonatomic) <_UIDigitizerGestureRecognizerImpDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } digitizerLocation;
@property (nonatomic) double lastRecognitionTime;
@property (nonatomic) double maximumPressDuration;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) NSTimer *minimumPressDurationTimer;
@property (nonatomic) long long numberOfActiveTouches;
@property (nonatomic) double pressBeginTime;
@property (nonatomic) double pressEndTime;
@property (nonatomic) double pressEndToTouchBeginDuration;
@property (nonatomic) double touchEndTime;
@property (nonatomic) double touchEndToPressEndDuration;
@property (nonatomic) NSTimer *waitingForTouchesAfterPressTimer;

- (void).cxx_destruct;
- (void)_minimumPressDurationTimerFired:(id)arg1;
- (bool)_senderOfPressesHasTouchSurface:(id)arg1 withEvent:(id)arg2;
- (bool)_senderOfPressesIsSoftwareRemoteWithEvent:(id)arg1;
- (bool)_shouldReportDigitizerLocation;
- (void)_waitingForTouchesAfterPressTimerFired:(id)arg1;
- (struct CGPoint { double x1; double x2; })defaultDigitizerLocation;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })digitizerLocation;
- (double)lastRecognitionTime;
- (double)maximumPressDuration;
- (double)minimumPressDuration;
- (id)minimumPressDurationTimer;
- (long long)numberOfActiveTouches;
- (double)pressBeginTime;
- (double)pressEndTime;
- (double)pressEndToTouchBeginDuration;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setDigitizerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastRecognitionTime:(double)arg1;
- (void)setMaximumPressDuration:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setMinimumPressDurationTimer:(id)arg1;
- (void)setNumberOfActiveTouches:(long long)arg1;
- (void)setPressBeginTime:(double)arg1;
- (void)setPressEndTime:(double)arg1;
- (void)setPressEndToTouchBeginDuration:(double)arg1;
- (void)setTouchEndTime:(double)arg1;
- (void)setTouchEndToPressEndDuration:(double)arg1;
- (void)setWaitingForTouchesAfterPressTimer:(id)arg1;
- (double)touchEndTime;
- (double)touchEndToPressEndDuration;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)waitingForTouchesAfterPressTimer;

@end
