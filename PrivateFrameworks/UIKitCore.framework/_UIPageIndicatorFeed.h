
@interface _UIPageIndicatorFeed : NSObject {
    NSMutableArray * _activeQueue;
    <_UIPageIndicatorFeedDelegate> * _delegate;
    UIPageControl * _pageControl;
    NSMutableArray * _reuseQueue;
}

@property (nonatomic, retain) NSMutableArray *activeQueue;
@property (nonatomic) <_UIPageIndicatorFeedDelegate> *delegate;
@property (nonatomic, readonly) NSArray *indicators;
@property (nonatomic, retain) NSMutableArray *reuseQueue;

- (void).cxx_destruct;
- (bool)_isPageWithinActiveBounds:(long long)arg1;
- (id)activeIndicatorForPage:(long long)arg1;
- (id)activeQueue;
- (id)delegate;
- (id)indicatorForPage:(long long)arg1;
- (id)indicatorForPage:(long long)arg1 forSizeOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })indicatorSizeForCustomImage:(id)arg1;
- (struct CGSize { double x1; double x2; })indicatorSizeForPage:(long long)arg1;
- (id)indicators;
- (id)initWithPageControl:(id)arg1;
- (void)invalidateIndicators;
- (void)prepareIndicatorsFrom:(long long)arg1 to:(long long)arg2;
- (void)reloadIndicatorImageForPage:(long long)arg1;
- (void)reloadIndicatorImages;
- (id)reuseQueue;
- (void)setActiveQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReuseQueue:(id)arg1;
- (void)updateReuseQueue;

@end
