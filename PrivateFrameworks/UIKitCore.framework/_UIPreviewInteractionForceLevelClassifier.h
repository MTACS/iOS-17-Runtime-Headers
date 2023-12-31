
@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier {
    _UIPreviewInteractionStateRecognizer * _stateRecognizer;
}

- (void).cxx_destruct;
- (id)init;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)reset;
- (void)touchForceMultiplierDidChange;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (bool)wantsUnclampedForceValues;

@end
