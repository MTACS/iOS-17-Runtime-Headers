
@interface SKUISearchFieldTableView : UITableView {
    SKUITrendingSearchPage * _page;
    SKUITrendingSearchPageView * _pageView;
    <SKUITrendingSearchPageViewDelegate> * _trendingSearchDelegate;
    SKUITrendingSearchProvider * _trendingSearchProvider;
    bool  _trendingSearchesVisible;
}

@property (nonatomic) <SKUITrendingSearchPageViewDelegate> *trendingSearchDelegate;
@property (nonatomic, retain) SKUITrendingSearchProvider *trendingSearchProvider;
@property (nonatomic) bool trendingSearchesVisible;

- (void).cxx_destruct;
- (void)_reloadData;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;
- (void)layoutSubviews;
- (void)setTrendingSearchDelegate:(id)arg1;
- (void)setTrendingSearchProvider:(id)arg1;
- (void)setTrendingSearchesVisible:(bool)arg1;
- (id)trendingSearchDelegate;
- (id)trendingSearchProvider;
- (bool)trendingSearchesVisible;

@end
