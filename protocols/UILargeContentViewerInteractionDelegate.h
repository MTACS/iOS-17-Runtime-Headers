
@protocol UILargeContentViewerInteractionDelegate <NSObject>

@optional

- (void)largeContentViewerInteraction:(UILargeContentViewerInteraction *)arg1 didEndOnItem:(id <UILargeContentViewerItem>)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (<UILargeContentViewerItem> *)largeContentViewerInteraction:(UILargeContentViewerInteraction *)arg1 itemAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (UIViewController *)viewControllerForLargeContentViewerInteraction:(UILargeContentViewerInteraction *)arg1;

@end
