
@interface SBCornerFingerGestureClassifier : NSObject {
    SBCornerFingerPanGestureSettings * _settings;
}

- (void).cxx_destruct;
- (bool)classifySwipeWithOffsettedAngle:(double)arg1 distanceToCorner:(double)arg2 portrait:(bool)arg3;
- (id)initWithSettings:(id)arg1;

@end
