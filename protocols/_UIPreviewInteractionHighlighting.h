
@protocol _UIPreviewInteractionHighlighting <NSObject>

@required

- (void)finalizeHighlightForPreviewingContext:(id <UIViewControllerPreviewing>)arg1;
- (<UIViewImplicitlyAnimating> *)highlightShouldBeginInContainerView:(UIView *)arg1 presentationContainerView:(UIView *)arg2 previewingContext:(id <UIViewControllerPreviewing>)arg3;
- (void)prepareHighlightWithPreviewingContext:(id <UIViewControllerPreviewing>)arg1;

@end
