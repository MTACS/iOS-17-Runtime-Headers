
@interface CoreIDVPAD.PADInternalClassifier : NSObject {
    void classifier;
    void gestureStartBlock;
    void incorrectGestureDetectedBlock;
    void isClassifierLoading;
    void onClassifierLoaded;
    void onGesturesFinishedBlock;
    void selfieCompletionBlock;
    void selfieCompletionBlockAccessSemaphore;
}

- (void).cxx_destruct;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (void)enableAccessibilityOptions;
- (void)finishLivenessWithSelfie:(id)arg1 performIDMatching:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)pauseLiveness;
- (void)prepareToResumeLiveness;
- (void)processLivenessFrame:(id)arg1 withOptions:(struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })arg2 taOptions:(long long)arg3;
- (void)restartLivenessGesture;
- (void)resumeLiveness;
- (void)skipLivenessGesture;
- (void)startLiveness:(id)arg1 onGestureStart:(id /* block */)arg2 onIncorrectGestureDetected:(id /* block */)arg3 onGesturesFinished:(id /* block */)arg4;

@end
