
@interface UICollectionViewControllerWrapperView : UIView

- (id)_collectionViewController;
- (id)_deepestActionResponder;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)didMoveToSuperview;
- (id)preferredFocusedView;

@end
