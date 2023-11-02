
@interface FMFindingUI.FMPFSKScene : SKScene <CLLocationManagerDelegate> {
    void altDelegate;
    void axisesNode;
    void config;
    void debugModeObservation;
    void dotCountObservation;
    void experienceType;
    void initialBearing;
    void initialTouchDownLocation;
    void isInteractivelyDebugging;
    void isolationQueue;
    void lastRenderTime;
    void motionManager;
    void opacity;
    void opacitySpring;
    void patternNode;
    void presentedOpacity;
    void previousHeading;
    void ringView;
    void sceneSize;
    void shouldApplyOpacity;
    void style;
    void usingDebuggingTouches;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)update:(double)arg1;

@end
