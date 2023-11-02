
@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate> {
    NSTimer * _nextPageScrollTimer;
    UIPageControl * _pageControl;
    UIScrollView * _pageScrollView;
    NSArray * _pageViews;
    double  _pagingInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *nextPageScrollTimer;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) UIScrollView *pageScrollView;
@property (nonatomic, retain) NSArray *pageViews;
@property (nonatomic) double pagingInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configMediaView;
- (id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2;
- (void)layoutSubviews;
- (id)nextPageScrollTimer;
- (id)pageControl;
- (id)pageScrollView;
- (id)pageViews;
- (double)pagingInterval;
- (void)resetPageScrolling;
- (void)scrollToNextPage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setNextPageScrollTimer:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageScrollView:(id)arg1;
- (void)setPageViews:(id)arg1;
- (void)setPagingInterval:(double)arg1;

@end
