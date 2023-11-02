
@interface STSSearchBrowserHeaderView : UIView {
    UISearchBar * _searchBar;
    NSLayoutConstraint * _searchBarHeight;
}

@property (nonatomic, readonly) UISearchBar *searchBar;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)searchBar;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;

@end
