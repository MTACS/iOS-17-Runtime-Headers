
@interface _UISearchBarTransitionContext : NSObject {
    _UISearchBarLayout * _fromLayout;
    _UISearchBarLayout * _toLayout;
}

@property (nonatomic, copy) _UISearchBarLayout *fromLayout;
@property (nonatomic, copy) _UISearchBarLayout *toLayout;

- (void).cxx_destruct;
- (id)fromLayout;
- (void)setFromLayout:(id)arg1;
- (void)setToLayout:(id)arg1;
- (id)toLayout;

@end
