
@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    bool  _animateGestureCancelationOrFailure;
    <SBAssistantSceneControlling> * _assistantController;
    SBAssistantRootViewController * _assistantRootViewController;
    SBMainWorkspaceTransaction * _currentTransaction;
    UINotificationFeedbackGenerator * _dismissalFeedbackGenerator;
    double  _dismissalThreshold;
    long long  _dismissalType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dismissingViewTouchOffset;
    bool  _hasPreservedInputViews;
    bool  _initiatedFromBottomEdge;
    bool  _isDismissing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    SBAppSwitcherSettings * _settings;
    SBWindowSceneStatusBarSettingsAssertion * _statusBarAssertion;
    <SBTransientOverlayPresenting> * _transientOverlayPresenter;
    SBTransientOverlayViewController * _transientOverlayViewController;
    SBWindowScene * _windowScene;
}

@property (nonatomic) bool animateGestureCancelationOrFailure;
@property (nonatomic, retain) <SBAssistantSceneControlling> *assistantController;
@property (nonatomic, retain) SBMainWorkspaceTransaction *currentTransaction;
@property (nonatomic) double dismissalThreshold;
@property (nonatomic, readonly) long long dismissalType;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (double)_backgroundWeightingForDismissal:(bool)arg1;
- (double)_backgroundWeightingForGestureProgress;
- (void)_begin;
- (void)_beginWithGesture:(id)arg1;
- (bool)_canBeInterrupted;
- (void)_cleanupHierarchyForDismissal:(bool)arg1;
- (double)_clientAnimationsDelay;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_dismissClientAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)_dismissalFeedbackGenerator;
- (void)_finishInteractionAndDismiss:(bool)arg1 animated:(bool)arg2;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_finishWithGesture:(id)arg1;
- (double)_hapticDelay;
- (id)_layoutSettings;
- (long long)_notificationFeedbackType;
- (double)_scaleForDismissal;
- (double)_scaleForGestureProgress;
- (void)_setFluidDismissalState:(id)arg1;
- (bool)_shouldDismissImmmediatelyAtFullGestureProgress;
- (double)_swipeUpGestureProgress;
- (double)_swipeUpGestureTranslation;
- (void)_updateDismissingViewLayoutAndStyleForGesture;
- (void)_updateWithGesture:(id)arg1;
- (id)_viewForGesture;
- (double)_yOffsetForGestureProgress;
- (double)_zoomOutDelay;
- (bool)animateGestureCancelationOrFailure;
- (id)assistantController;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (id)currentTransaction;
- (double)dismissalThreshold;
- (long long)dismissalType;
- (id)initWithTransitionRequest:(id)arg1 windowScene:(id)arg2 dismissalType:(long long)arg3 initiatedFromBottomEdge:(bool)arg4;
- (void)setAnimateGestureCancelationOrFailure:(bool)arg1;
- (void)setAssistantController:(id)arg1;
- (void)setCurrentTransaction:(id)arg1;
- (void)setDismissalThreshold:(double)arg1;
- (void)setWindowScene:(id)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (id)windowScene;

@end
