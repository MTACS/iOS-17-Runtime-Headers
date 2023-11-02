
@protocol UILayoutContainerViewDelegate <NSObject>

@optional

- (void)__viewWillLayoutSubviews;
- (void)_layoutContainerViewDidMoveToWindow:(UIWindow *)arg1;
- (void)_layoutContainerViewSemanticContentAttributeChanged:(UILayoutContainerView *)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(UIWindow *)arg1;

@end
