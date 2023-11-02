
@interface SFFluidTabOverviewSwipeDeleteInteraction : SFFluidCollectionViewInteraction <UIGestureRecognizerDelegate> {
    bool  _canDelete;
    NSIndexPath * _interactionIndexPath;
    UIPanGestureRecognizer * _panGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didRecognizePan:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (id)init;
- (id)panGestureRecognizer;
- (id)transformLayoutAttributes:(id)arg1;

@end
