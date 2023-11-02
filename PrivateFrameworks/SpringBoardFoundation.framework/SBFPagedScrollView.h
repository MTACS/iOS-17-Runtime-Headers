
@interface SBFPagedScrollView : BSUIScrollView {
    bool  _changingScrollViewLayout;
    unsigned long long  _currentPageIndex;
    bool  _gestureEnabled;
    NSArray * _pageViews;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visiblePageRange;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) bool gestureEnabled;
@property (nonatomic, copy) NSArray *pageViews;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } visiblePageRange;

- (void).cxx_destruct;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (void)_bs_willBeginScrolling;
- (void)_layoutScrollView;
- (void)_updateCurrentPageForScrollOffset;
- (void)_updateVisiblePages;
- (struct CGPoint { double x1; double x2; })contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentPageIndex;
- (struct { struct { double x_1_1_1; bool x_1_1_2; } x1; struct { double x_2_1_1; bool x_2_1_2; } x2; })currentScrollInterval;
- (bool)gestureEnabled;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutPages;
- (void)layoutSubviews;
- (double)pageRelativeScrollOffset;
- (id)pageViews;
- (bool)resetContentOffsetToCurrentPage;
- (bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (bool)scrollToPageAtIndex:(unsigned long long)arg1 withAnimationSettings:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGestureEnabled:(bool)arg1;
- (void)setPageViews:(id)arg1;
- (void)setVisiblePageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)unclippedPageRelativeScrollOffset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visiblePageRange;

@end
