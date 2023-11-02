
@interface _PADClassifier : NSObject <PADClassifier> {
    _TtC10CoreIDVPAD21PADInternalClassifier * _classifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (void)enableAccessibilityOptions;
- (void)finishLivenessWithSelfie:(id)arg1 idMatchingFaceprints:(id)arg2 completion:(id /* block */)arg3;
- (void)finishLivenessWithSelfie:(id)arg1 performIDMatching:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)pauseLiveness;
- (void)prepareToResumeLiveness;
- (void)processLivenessFrame:(id)arg1 withOptions:(struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })arg2 taOptions:(long long)arg3;
- (void)processRecordedLivenessFrame:(id)arg1 withPRD:(bool)arg2 FAC:(bool)arg3;
- (void)restartLivenessGesture;
- (void)resumeLiveness;
- (void)skipLivenessGesture;
- (void)skipRecordedLivenessGesture;
- (void)startLiveness:(id)arg1 onGestureStart:(id /* block */)arg2 onIncorrectGestureDetected:(id /* block */)arg3 onGesturesFinished:(id /* block */)arg4;
- (void)startLivenessVideoProcessing:(id)arg1 onGestureStart:(id /* block */)arg2 onGesturesFinished:(id /* block */)arg3;

@end
