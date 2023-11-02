
@interface SFFluidCollectionViewDragCoordinator : NSObject <UIDragInteractionDelegate> {
    UIDragInteraction * _dragInteraction;
    SFFluidCollectionView * _fluidCollectionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SFFluidCollectionView *fluidCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)fluidCollectionView;
- (id)initWithFluidCollectionView:(id)arg1;

@end
