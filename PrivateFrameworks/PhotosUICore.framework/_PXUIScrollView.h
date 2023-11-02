
@interface _PXUIScrollView : UIScrollView {
    bool  _deferContentOffsetUpdates;
    <_PXUIScrollViewFocusItemProvider> * _focusItemProvider;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestContentInsets;
    bool  _ignoresSafeAreaInsets;
    bool  _isFocusFastScrolling;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pagingOriginOffset;
    <PXUIScrollViewDelegate> * _px_delegate;
    bool  _respectsContentZOrder;
    NSMutableArray * _scrollIndicatorViews;
    bool  _shouldScrollSimultaneouslyWithDescendantScrollView;
}

@property (nonatomic) bool deferContentOffsetUpdates;
@property (nonatomic) <_PXUIScrollViewFocusItemProvider> *focusItemProvider;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestContentInsets;
@property (nonatomic) bool ignoresSafeAreaInsets;
@property (nonatomic) bool isFocusFastScrolling;
@property (nonatomic) struct CGPoint { double x1; double x2; } pagingOriginOffset;
@property (setter=px_setDelegate:, nonatomic) <PXUIScrollViewDelegate> *px_delegate;
@property (nonatomic) bool respectsContentZOrder;
@property (nonatomic, readonly) NSMutableArray *scrollIndicatorViews;
@property (nonatomic) bool shouldScrollSimultaneouslyWithDescendantScrollView;

- (void).cxx_destruct;
- (void)_updatePagingOrigin;
- (void)addSubview:(id)arg1;
- (bool)deferContentOffsetUpdates;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemProvider;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestContentInsets;
- (bool)ignoresSafeAreaInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFocusFastScrolling;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })pagingOriginOffset;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)px_addSubview:(id)arg1;
- (id)px_delegate;
- (void)px_setDelegate:(id)arg1;
- (bool)respectsContentZOrder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollIndicatorFrameForAxis:(long long)arg1;
- (id)scrollIndicatorViews;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDeferContentOffsetUpdates:(bool)arg1;
- (void)setFocusItemProvider:(id)arg1;
- (void)setHitTestContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIgnoresSafeAreaInsets:(bool)arg1;
- (void)setIsFocusFastScrolling:(bool)arg1;
- (void)setPagingOriginOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRespectsContentZOrder:(bool)arg1;
- (void)setShouldScrollSimultaneouslyWithDescendantScrollView:(bool)arg1;
- (bool)shouldScrollSimultaneouslyWithDescendantScrollView;
- (void)willRemoveSubview:(id)arg1;

@end
