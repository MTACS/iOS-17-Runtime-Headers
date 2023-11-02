
@interface WKUIPagingTransitionController : NSObject <UIScrollViewDelegate> {
    long long  _actualPageNumber;
    <WKUIPagingTransitionControllerAnimationDelegate> * _animationDelegate;
    struct { 
        int supportsTransitioningView; 
        int supportsTransitioningPage; 
        int supportsDidFinishTransitionForView; 
    }  _animationDelegateCache;
    long long  _currentPage;
    UIView * _currentPageView;
    <WKUIPagingTransitionControllerDelegate> * _delegate;
    double  _increaseMusicControlBottomOffset;
    double  _lastContentOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastVisibleRange;
    long long  _musicControlPageIndex;
    long long  _numberOfPages;
    UIPageControl * _pageControl;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageSize;
    long long  _pagingAxis;
    UIScrollView * _scrollView;
    double  _topPadding;
}

@property (nonatomic) <WKUIPagingTransitionControllerAnimationDelegate> *animationDelegate;
@property (nonatomic) long long currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKUIPagingTransitionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long dominantPage;
@property (readonly) unsigned long long hash;
@property (nonatomic) double increaseMusicControlBottomOffset;
@property (nonatomic) long long musicControlPageIndex;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic) struct CGSize { double x1; double x2; } pageSize;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (void)_cancelAnimatedTransitionFromPage:(long long)arg1;
- (long long)_currentPage;
- (void)_endAnimatedTransitionToPage:(long long)arg1;
- (void)_endTransitionAnimationForPage:(long long)arg1 visible:(bool)arg2;
- (void)_handleScrollViewScrollEnd;
- (bool)_isValidPage:(long long)arg1;
- (long long)_pageForOffset:(double)arg1;
- (id)_pageViewForPage:(unsigned long long)arg1;
- (void)_prepareViewForPage:(unsigned long long)arg1 pagingDirection:(long long)arg2;
- (void)_setActualPageNumber:(long long)arg1;
- (id)animationDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForPage:(long long)arg1;
- (long long)currentPage;
- (id)delegate;
- (long long)dominantPage;
- (double)increaseMusicControlBottomOffset;
- (id)initWithScrollView:(id)arg1 pageSize:(struct CGSize { double x1; double x2; })arg2 numberOfPages:(long long)arg3 startingPage:(long long)arg4 pagingAxis:(long long)arg5 delegate:(id)arg6;
- (long long)musicControlPageIndex;
- (long long)numberOfPages;
- (id)pageControl;
- (struct CGSize { double x1; double x2; })pageSize;
- (void)reanimateCurrentView;
- (void)resetCurrentView;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setCurrentPage:(long long)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIncreaseMusicControlBottomOffset:(double)arg1;
- (void)setMusicControlPageIndex:(long long)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTopPadding:(double)arg1;
- (double)topPadding;

@end
