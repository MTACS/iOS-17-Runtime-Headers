
@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    SBApplicationSceneUpdateTransaction * _activateFloatingApplicationTransaction;
    bool  _didAddActivateFloatingApplicationTransaction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFloatingApplicationFrame;
    bool  _tryPreemptiveFloatingApplicationActivation;
}

- (void).cxx_destruct;
- (void)_begin;
- (void)_beginWithGesture:(id)arg1;
- (void)_didComplete;
- (void)_finishWithGesture:(id)arg1;
- (long long)_gestureType;
- (void)_performBlockWithLiveContentOverlayUpdatesSuspended:(id /* block */)arg1;
- (void)_startSuppressingKeyboardForFloatingApplication;
- (void)_stopSuppressingKeyboard;
- (id)_transitionRequestForPreemptiveFloatingApplicationActivation;
- (void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;

@end
