
@interface _UISearchBarTransitionerBase : NSObject {
    _UISearchBarLayout * _activeLayout;
    UIView * _searchBar;
    _UISearchBarTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) _UISearchBarLayout *activeLayout;
@property (nonatomic, readonly) UIView *searchBar;
@property (nonatomic, retain) _UISearchBarTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)activeLayout;
- (void)animate;
- (void)cancel;
- (void)complete;
- (id)init;
- (id)initWithNewTransitionContextForSearchBar:(id)arg1;
- (id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2;
- (void)prepare;
- (id)searchBar;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;

@end
