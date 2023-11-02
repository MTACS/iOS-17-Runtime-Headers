
@interface TeaUI.SwipeActionCollectionView : UICollectionView <TSSwipeActionCoordinating> {
    void coordinatingCancelBlocks;
    void coordinatingResetBlocks;
    void dependencyCleanupBlocks;
    void isBottomRubberBanding;
    void swipeActionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  swipeActionRestoreState;
    void updateGroup;
}

@property (nonatomic) bool allowsSelection;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) UIPanGestureRecognizer *coordinatingSwipeActionPanGestureRecognizer;
@property (nonatomic, readonly) bool coordinatingSwipeActionShouldCancel;

- (void).cxx_destruct;
- (bool)allowsSelection;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (void)coordinatingResetSwipeAction;
- (id)coordinatingSwipeActionPanGestureRecognizer;
- (bool)coordinatingSwipeActionShouldCancel;
- (void)dealloc;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)didMoveToWindow;
- (void)handleFromCoordinatingGestureWithGestureRecognizer:(id)arg1;
- (void)handlePanGestureWithGestureRecognizer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)layoutSubviews;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)setAllowsSelection:(bool)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
