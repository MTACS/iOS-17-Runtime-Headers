
@interface SwiftUI.UpdateCoalescingCollectionView : UICollectionView {
    void _lastUpdateSeed;
    void bridgedState;
    void cachedIdealSize;
    void eventState;
    void helper;
    void ignoreGraphUpdates;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pendingDeselectedItem;
    void pendingGraphUpdate;
    void pendingScrollTarget;
    void postUpdateInvalidations;
    void safeAreaTransitionState;
    void visibleCellsUpdate;
}

@property (nonatomic, readonly) bool _wantsConstraintBasedLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;

+ (bool)_isFromSwiftUI;

- (void).cxx_destruct;
- (bool)_wantsConstraintBasedLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canBecomeFirstResponder;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)safeAreaInsetsDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
