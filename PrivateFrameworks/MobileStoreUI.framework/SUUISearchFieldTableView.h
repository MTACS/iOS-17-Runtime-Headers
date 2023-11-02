
@interface SUUISearchFieldTableView : UITableView {
    SUUITrendingSearchPage * _page;
    SUUITrendingSearchPageView * _pageView;
    <SUUITrendingSearchPageViewDelegate> * _trendingSearchDelegate;
    SUUITrendingSearchProvider * _trendingSearchProvider;
    bool  _trendingSearchesVisible;
}

@property (nonatomic) <SUUITrendingSearchPageViewDelegate> *trendingSearchDelegate;
@property (nonatomic, retain) SUUITrendingSearchProvider *trendingSearchProvider;
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
