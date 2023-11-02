
@interface SBProductivityGestureController : NSObject <UIGestureRecognizerDelegate> {
    SBProductivityGestureEducationController * _educationController;
    SBWorkspaceKeyboardFocusController * _focusController;
    SBGestureDefaults * _gestureDefaults;
    <BSDefaultObserver> * _gestureDefaultsObserver;
    double  _initPinchableDistance;
    FBSceneManager * _sceneManager;
    SBSystemGestureManager * _systemGestureManager;
    _UIKBProductivityDoubleTapGesture * _threeFingerDoubleTap;
    _UIKBProductivityLongPressGestureRecognizer * _threeFingerLongPress;
    _UIKBProductivityPinchGestureRecognizer * _threeFingerPinch;
    _UIKBProductivitySingleTapGesture * _threeFingerSingleTap;
    _UIKBProductivityPanGestureRecognizer * _threeFingerSlide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_educationTypeForGesture:(id)arg1 direction:(long long)arg2;
- (bool)_enabledForCurrentAppScenes;
- (void)_evaluateEnablement;
- (id)_focusedSceneForAction;
- (long long)_orientationOfFocusedSceneForGesture:(id)arg1;
- (void)_setupGestureRecognizers;
- (void)_tearDownGestureRecognizers;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleProductivityGesture:(id)arg1;
- (id)initWithSystemGestureManager:(id)arg1 focusController:(id)arg2 gestureDefaults:(id)arg3 gestureEducationController:(id)arg4;
- (long long)slideDirectionWithGesture:(id)arg1;

@end
