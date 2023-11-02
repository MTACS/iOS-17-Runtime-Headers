
@interface ASVSingleFingerGesture : ASVGesture {
    <ASVSingleFingerGestureDelegate> * _delegate;
    unsigned long long  _enabledGestureTypes;
    void _initialTouchLocation;
    void _latestTouchLocation;
    bool  _panThresholdPassed;
    <ASVTouch> * _touch;
    double  _touchStartTime;
}

@property (nonatomic) <ASVSingleFingerGestureDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long enabledGestureTypes;
@property (nonatomic) void initialTouchLocation;
@property (nonatomic) void latestTouchLocation;
@property (nonatomic) bool panThresholdPassed;
@property (nonatomic, retain) <ASVTouch> *touch;
@property (nonatomic) double touchStartTime;

- (void).cxx_destruct;
- (id)delegate;
- (unsigned long long)enabledGestureTypes;
- (void)finishGesture;
- (bool)generatesTaps;
- (bool)generatesTransforms;
- (bool)gestureTypeIsEnabled:(unsigned long long)arg1;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;
- (void)initialTouchLocation;
- (void)latestTouchLocation;
- (bool)panThresholdPassed;
- (void)setDelegate:(id)arg1;
- (void)setInitialTouchLocation;
- (void)setLatestTouchLocation;
- (void)setPanThresholdPassed:(bool)arg1;
- (void)setTouch:(id)arg1;
- (void)setTouchStartTime:(double)arg1;
- (id)touch;
- (double)touchStartTime;
- (void)updateGesture;

@end
