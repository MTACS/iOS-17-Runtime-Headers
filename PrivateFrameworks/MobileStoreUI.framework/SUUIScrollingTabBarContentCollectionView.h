
@interface SUUIScrollingTabBarContentCollectionView : SUUIViewControllerContainerCollectionView {
    bool  _performingLayout;
}

@property (nonatomic) <SUUIScrollingTabBarContentCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

- (void)_reuseCell:(id)arg1;
- (bool)isPerformingLayout;
- (void)layoutSubviews;

@end
