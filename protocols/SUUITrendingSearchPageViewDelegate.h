
@protocol SUUITrendingSearchPageViewDelegate <NSObject>

@required

- (void)trendingSearchPageView:(SUUITrendingSearchPageView *)arg1 didSelectSearch:(SUUITrendingSearch *)arg2;

@optional

- (NSURL *)URLForTrendingSearchPageView:(SUUITrendingSearchPageView *)arg1;

@end
