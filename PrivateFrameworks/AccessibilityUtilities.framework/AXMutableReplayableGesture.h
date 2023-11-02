
@interface AXMutableReplayableGesture : AXReplayableGesture

- (void)_addPoint:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atEventIndex:(unsigned long long)arg4;
- (void)_addPoint:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atTime:(double)arg4;
- (id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)arg1;
- (id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)arg1;
- (void)_removeFingersAtEventIndex:(unsigned long long)arg1;
- (void)addPointsByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3;
- (void)addPointsFromReplayableGesture:(id)arg1;

@end
