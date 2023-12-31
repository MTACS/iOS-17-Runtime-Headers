
@protocol _UIRefreshControlHosting <NSObject>

@required

- (void)decrementInsetHeight:(double)arg1;
- (void)incrementInsetHeight:(double)arg1;
- (void)refreshControl:(UIRefreshControl *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (bool)refreshControlInsetsAffectScrollViewRubberBanding;
- (UIScrollView *)scrollView;

@end
