
@interface _UICollectionViewOrthogonalScrollView : UIScrollView <_UICollectionViewOrthogonalScrollView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _baseContentInsets;
    UICollectionView * _collectionView;
    _UICollectionLayoutSectionDescriptor * _descriptor;
    bool  _isConfiguring;
    long long  _section;
    _UICollectionViewSubviewRouter * _subviewRouter;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDecelerating, nonatomic, readonly) bool decelerating;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTracking, nonatomic, readonly) bool tracking;

+ (bool)_supportsInvalidatingFocusCache;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToTop;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (id)_extantFocusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_focusPrimaryScrollableAxis;
- (id)_focusScrollBoundaryMetricsForItem:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_focusScrollableAreaInsets;
- (void)_notifyDidScroll;
- (struct CGPoint { double x1; double x2; })_panGestureLocationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_panGestureVelocityInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_willRemoveSubview:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)dealloc;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
