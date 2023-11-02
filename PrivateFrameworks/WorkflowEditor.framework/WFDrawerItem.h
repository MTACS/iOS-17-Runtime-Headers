
@interface WFDrawerItem : NSObject {
    UIViewController<WFDrawerPane> * _drawerPane;
}

@property (nonatomic) UIViewController<WFDrawerPane> *drawerPane;
@property (nonatomic) double fauxHeaderHeight;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIView *titleView;

- (void).cxx_destruct;
- (id)drawerPane;
- (double)fauxHeaderHeight;
- (id)initWithDrawerPane:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)searchBar;
- (void)setDrawerPane:(id)arg1;
- (void)setFauxHeaderHeight:(double)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)title;
- (id)titleView;

@end
