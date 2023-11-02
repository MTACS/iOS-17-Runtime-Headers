
@protocol PADClassifier <NSObject>

@required

- (void)cancelWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enableAccessibilityOptions;
- (void)finishLivenessWithSelfie:(void *)arg1 idMatchingFaceprints:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PADFrame *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PADClassifierResult *, NSError *, void*
- (void)finishLivenessWithSelfie:(void *)arg1 performIDMatching:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PADFrame *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PADClassifierResult *, NSError *, void*
- (void)pauseLiveness;
- (void)prepareToResumeLiveness;
- (void)processLivenessFrame:(PADFrame *)arg1 withOptions:(struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })arg2 taOptions:(long long)arg3;
- (void)processRecordedLivenessFrame:(PADFrame *)arg1 withPRD:(bool)arg2 FAC:(bool)arg3;
- (void)restartLivenessGesture;
- (void)resumeLiveness;
- (void)skipLivenessGesture;
- (void)skipRecordedLivenessGesture;
- (void)startLiveness:(void *)arg1 onGestureStart:(void *)arg2 onIncorrectGestureDetected:(void *)arg3 onGesturesFinished:(void *)arg4; // needs 4 arg types, found 18: PADClassifierRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)startLivenessVideoProcessing:(void *)arg1 onGestureStart:(void *)arg2 onGesturesFinished:(void *)arg3; // needs 3 arg types, found 13: PADClassifierRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
