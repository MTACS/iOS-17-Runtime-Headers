
@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    bool  _inUserInteraction;
    void * _scrollingTreeNodeDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isInUserInteraction, nonatomic) bool inUserInteraction;
@property (readonly) Class superclass;

- (id)_actingParentScrollViewForScrollView:(id)arg1;
- (bool)_isInUserInteraction;
- (struct CGPoint { double x1; double x2; })_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 locationInView:(struct CGPoint { double x1; double x2; })arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7;
- (void)_scrollView:(id)arg1 asynchronouslyHandleScrollEvent:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelPointersForGestureRecognizer:(id)arg1;
- (id)initWithScrollingTreeNodeDelegate:(void*)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setInUserInteraction:(bool)arg1;

@end
