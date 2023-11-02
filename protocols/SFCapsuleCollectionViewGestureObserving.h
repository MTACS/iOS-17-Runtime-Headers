
@protocol SFCapsuleCollectionViewGestureObserving <NSObject>

@optional

- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 didBeginSelectionGestureOnAxis:(unsigned long long)arg2;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 didUpdateProgress:(double)arg2 toSelectItemAtIndex:(long long)arg3 progressToTopAction:(double)arg4 snapToAxis:(unsigned long long)arg5;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 selectionGestureDidChangeFromAxis:(unsigned long long)arg2;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 willEndSelectionGestureWithCoordinator:(id <SFTransitionCoordinating>)arg2;
- (void)capsuleCollectionViewDidBeginMinimizationGesture:(SFCapsuleCollectionView *)arg1;
- (void)capsuleCollectionViewDidEndMinimizationGesture:(SFCapsuleCollectionView *)arg1;
- (void)capsuleCollectionViewDidEndSelectionGesture:(SFCapsuleCollectionView *)arg1;
- (void)capsuleCollectionViewDidUpdateMinimizationGesture:(SFCapsuleCollectionView *)arg1;

@end
