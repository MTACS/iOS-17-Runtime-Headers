
@interface SFFluidCollectionViewDropCoordinator : NSObject <SFFluidCollectionViewDropCoordinator, UIDropInteractionDelegate> {
    NSIndexPath * _destinationIndexPath;
    UIDropInteraction * _dropInteraction;
    SFFluidCollectionView * _fluidCollectionView;
    NSArray * _items;
    <SFFluidCollectionShadowUpdateToken> * _shadowDeleteToken;
    NSArray * _shadowDeletedDragItems;
    <SFFluidCollectionShadowUpdateToken> * _shadowInsertToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSIndexPath *destinationIndexPath;
@property (nonatomic, readonly) SFFluidCollectionView *fluidCollectionView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearAllShadowUpdatesForSession:(id)arg1;
- (void)_clearShadowDeletesForSession:(id)arg1;
- (void)_clearShadowInsertForSession:(id)arg1;
- (id)_destinationIndexPathForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_getValueWithDragDelegateObjectsForSession:(id)arg1 block:(id /* block */)arg2;
- (void)_performWithDragDelegateObjectsForSession:(id)arg1 block:(id /* block */)arg2;
- (id)destinationIndexPath;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)fluidCollectionView;
- (id)initWithFluidCollectionView:(id)arg1;
- (id)items;

@end
