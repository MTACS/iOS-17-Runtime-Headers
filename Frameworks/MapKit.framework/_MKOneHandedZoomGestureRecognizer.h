
@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    <MKZoomingGestureControlConfiguration> * _configuration;
    bool  _didReceive1stTap;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationOfTapGesture;
    _MKZoomingPanGestureRecognizer * _panGestureRecognizer;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _timerOn;
}

@property (nonatomic, copy) <MKZoomingGestureControlConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationOfTapGesture;
@property (nonatomic, readonly) _MKZoomingPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) double velocity;

- (void).cxx_destruct;
- (void)_clearTapTimer;
- (void)_panGestureRecognizerStateDidChange:(id)arg1;
- (void)_startTapTimer:(double)arg1;
- (void)_tapGestureRecognizerStateDidChange:(id)arg1;
- (void)_tooSlow:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationOfTapGesture;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)panGestureRecognizer;
- (void)reset;
- (double)scale;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)tapGestureRecognizer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)velocity;

@end
