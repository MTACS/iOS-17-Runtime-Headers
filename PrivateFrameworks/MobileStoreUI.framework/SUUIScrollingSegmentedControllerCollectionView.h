
@interface SUUIScrollingSegmentedControllerCollectionView : SUUIViewControllerContainerCollectionView {
    bool  _performingLayout;
}

@property (nonatomic) <SUUIScrollingSegmentedControllerCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

- (bool)isPerformingLayout;
- (void)layoutSubviews;

@end
