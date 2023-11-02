
@interface PXStoryScrollContentLayout : PXGLayout {
    <PXStoryScrollContentLayoutDelegate> * _delegate;
    struct { 
        bool scrollOffsetDidChange; 
    }  _delegateRespondsTo;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollableOutsets;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) <PXStoryScrollContentLayoutDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } scrollOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollableOutsets;

- (void).cxx_destruct;
- (void)_invalidateContentSize;
- (struct CGPoint { double x1; double x2; })_scrollOffsetForVisibleRectOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_scrollOffsetFromVisibleRect;
- (void)_setScrollOffset:(struct CGPoint { double x1; double x2; })arg1 updateScrollPosition:(bool)arg2;
- (void)_updateContentSize;
- (struct CGPoint { double x1; double x2; })_visibleRectOriginForScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)delegate;
- (id)init;
- (void)referenceSizeDidChange;
- (struct CGPoint { double x1; double x2; })scrollOffset;
- (struct CGPoint { double x1; double x2; })scrollOffsetForScrollViewContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })scrollViewContentOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollableOutsets;
- (void)setDelegate:(id)arg1;
- (void)setScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollableOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)update;
- (void)visibleRectDidChange;

@end
