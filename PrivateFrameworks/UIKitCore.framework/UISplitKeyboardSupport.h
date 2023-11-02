
@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {
    id /* block */  _bounceCompletionBlock;
    CADisplayLink * _displayLink;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTranslation;
    bool  _isSplitting;
    bool  _isTranslating;
    double  _lastBounceTime;
    double  _lastTranslationNotificationTime;
    bool  _shouldUpdateKLGForTransition;
    UIPanGestureRecognizer * _singleFingerPanRecognizer;
    bool  _splitLockState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationVelocity;
    UIPanGestureRecognizer * _twoFingerPanRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSplitting;
@property (nonatomic, readonly) bool isTranslating;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (bool)_updateKeyboardLayoutGuideForHostFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_updateKeyboardLayoutGuideForSplitTransition:(bool)arg1;
- (void)_updatedController;
- (void)bounceAnimationDidFinish;
- (void)cancelBounceAnimation;
- (void)cancelGestureRecognizers;
- (bool)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)dock;
- (void)finishTransitionWithCompletion:(id /* block */)arg1;
- (bool)generateSplitNotificationForNewPlacement:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)invalidateDisplayLink;
- (bool)isSplitting;
- (bool)isTranslating;
- (void)prepareForTransition;
- (bool)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)transitionDidFinish:(bool)arg1;
- (void)translateDetected:(id)arg1;
- (void)undock;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updatedControllerApplicator:(id)arg1;
- (void)willPerformPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;

@end
