
@interface AVScrubbingGesturePlatformAdapter_iOS : AVScrubbingGesturePlatformAdapter <UIGestureRecognizerDelegate> {
    float  _coordinateVelocityConstant;
    float  _coordinateVelocityScale;
    float  _deviceCoordinateVelocityScaleFactor;
    long long  _gestureActiveCount;
    AVScrubbingGesturePlatformConfiguration * _gestureConfiguration;
    bool  _gestureEnabled;
    AVScrubbingPanGestureRecognizer * _panGestureRecognizer;
    double  _scrubbingWidth;
    float  _timelineVelocity;
    AVTouchGestureRecognizer * _touchGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scrubbingWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_panGestureAction:(id)arg1;
- (void)_touchGestureAction:(id)arg1;
- (bool)gestureActive;
- (bool)gestureEnabled;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithView:(id)arg1;
- (double)scrubbingWidth;
- (void)setGestureEnabled:(bool)arg1;
- (void)setScrubbingWidth:(double)arg1;
- (float)timelineVelocity;
- (struct CGPoint { double x1; double x2; })translation;

@end
