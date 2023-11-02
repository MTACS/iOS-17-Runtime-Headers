
@protocol SKUITrendingSearchPageViewDelegate <NSObject>

@required

- (void)trendingSearchPageView:(SKUITrendingSearchPageView *)arg1 didSelectSearch:(SKUITrendingSearch *)arg2;

@optional

- (NSURL *)URLForTrendingSearchPageView:(SKUITrendingSearchPageView *)arg1;

@end
