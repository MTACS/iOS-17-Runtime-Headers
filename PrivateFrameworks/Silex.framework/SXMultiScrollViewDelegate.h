
@interface SXMultiScrollViewDelegate : NSObject <TSKScrollViewDelegate, UIScrollViewDelegate> {
    NSHashTable * _scrollViewDelegates;
    NSHashTable * _tskScrollViewDelegates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *scrollViewDelegates;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSHashTable *tskScrollViewDelegates;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (bool)allowsHorizontalScrollingForScrollView:(id)arg1;
- (bool)allowsVerticalRubberbandingForScrollView:(id)arg1;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)replaceDelegate:(id)arg1 withDelegate:(id)arg2;
- (struct CGPoint { double x1; double x2; })scrollView:(id)arg1 restrictContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)scrollViewDelegates;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndSwipe:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidLayoutSubviews:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewWillScroll:(id)arg1;
- (id)tskScrollViewDelegates;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
