
@interface CalibrationViewController : UIViewController {
    double  _angleToRim;
    CalibrationBallView * _ballView;
    double  _calibrationAngle;
    NSMutableArray * _calibrationConstraints;
    UIButton * _cancelButton;
    CompassBackgroundView * _compassBackgroundView;
    CAShapeLayer * _compassBackgroundViewMask;
    struct CGPoint { 
        double x; 
        double y; 
    }  _compassOriginPoint;
    double  _compassRadius;
    bool  _ignoreMotionUpdates;
    UILabel * _instructionLabel;
    unsigned long long  _numCompleteTics;
    void _previousGravity;
    double  _previousHorizontalAngle;
    double  _previousTimestamp;
    int  _quantizationType;
    bool  _shouldCompleteTics;
    double  _startTicAngle;
    float * _ticsShowingArray;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (double)_correctedAngleForCurrentOrientation:(double)arg1;
- (void)_updateSizes;
- (void)addConstraints;
- (void)cancel;
- (bool)circleIsCompleted;
- (double)completeCircle;
- (void)dealloc;
- (void)hideAllTics;
- (id)init;
- (id)initWithOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)prefersStatusBarHidden;
- (float)quantizedPercentage:(double)arg1 forAngle:(double)arg2;
- (void)reset;
- (void)setBallAngle:(double)arg1 tiltAngle:(double)arg2;
- (void)setMotion:(id)arg1;
- (void)showTicAtAngle:(double)arg1 withCredit:(double)arg2;
- (void)showTicsBetweenStartAngle:(double)arg1 endAngle:(double)arg2 withCredit:(double)arg3;
- (void)updateMaskingPath;
- (id)updatedMaskingPath;
- (void)userDefaultsChanged:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
