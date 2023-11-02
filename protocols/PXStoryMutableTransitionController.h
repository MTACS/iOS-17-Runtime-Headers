
@protocol PXStoryMutableTransitionController

@required

- (PXGEntityManager *)entityManager;
- (void)setCurrentSegmentIdentifier:(long long)arg1 allowTransitions:(bool)arg2;
- (void)setEntityManager:(PXGEntityManager *)arg1;
- (void)startPendingTransitionIfNeeded;

@end
