
@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView {
    bool  _performingLayout;
}

@property (nonatomic) <SKUIScrollingSegmentedControllerCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

- (bool)isPerformingLayout;
- (void)layoutSubviews;

@end
