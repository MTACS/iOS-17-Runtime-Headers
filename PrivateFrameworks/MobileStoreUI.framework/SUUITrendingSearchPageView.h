
@interface SUUITrendingSearchPageView : UIView {
    <SUUITrendingSearchPageViewDelegate> * _delegate;
    SUUITrendingSearchPage * _page;
    SUUITrendingSearchView * _trendingSearchView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) <SUUITrendingSearchPageViewDelegate> *delegate;
@property (nonatomic, retain) SUUITrendingSearchPage *page;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)page;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
