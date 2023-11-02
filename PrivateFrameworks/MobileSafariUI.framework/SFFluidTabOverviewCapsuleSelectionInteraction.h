
@interface SFFluidTabOverviewCapsuleSelectionInteraction : SFFluidCollectionViewInteraction <SFCapsuleCollectionViewGestureObserving> {
    SFCapsuleCollectionView * _capsuleCollectionView;
    bool  _hideAdjacentItems;
    NSIndexPath * _interactingIndexPath;
    SFFluidTabOverviewLinearLayout * _linearLayout;
    NSTimer * _linearLayoutTimer;
    NSIndexPath * _nextIndexPath;
    double  _progressToItem;
    double  _progressToTopAction;
    unsigned long long  _snapAxis;
}

@property (nonatomic) SFCapsuleCollectionView *capsuleCollectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SFFluidTabOverviewLinearLayout *linearLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_switchToLinearLayoutIfNeeded;
- (void)cancelInteraction;
- (id)capsuleCollectionView;
- (void)capsuleCollectionView:(id)arg1 didBeginSelectionGestureOnAxis:(unsigned long long)arg2;
- (void)capsuleCollectionView:(id)arg1 didUpdateProgress:(double)arg2 toSelectItemAtIndex:(long long)arg3 progressToTopAction:(double)arg4 snapToAxis:(unsigned long long)arg5;
- (void)capsuleCollectionViewDidEndSelectionGesture:(id)arg1;
- (id)initWithCapsuleCollectionView:(id)arg1;
- (id)linearLayout;
- (void)setCapsuleCollectionView:(id)arg1;
- (void)setLinearLayout:(id)arg1;
- (id)transformLayoutAttributes:(id)arg1;

@end
