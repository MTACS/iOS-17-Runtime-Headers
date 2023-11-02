
@protocol RCPNaturalInputCollectionEventStreamChildComposer <RCPBaseEventStreamComposer>

@required

- (void)closeManipulatorAtLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (void)finish;
- (void)moveManipulatorByDelta:(struct CGVector { double x1; double x2; })arg1 withZDelta:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (void)moveManipulatorToLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (void)moveSelectionByDelta:(struct CGVector { double x1; double x2; })arg1 withZDelta:(double)arg2;
- (void)moveSelectionByDelta:(struct CGVector { double x1; double x2; })arg1 zDelta:(double)arg2 directionDelta:(struct CGVector { double x1; double x2; })arg3 zDirectionDelta:(double)arg4;
- (void)moveSelectionToLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2;
- (void)moveSelectionToLocation:(struct CGPoint { double x1; double x2; })arg1 zPosition:(double)arg2 direction:(struct CGPoint { double x1; double x2; })arg3 zDirection:(double)arg4;
- (void)openManipulatorAtLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;

@end
