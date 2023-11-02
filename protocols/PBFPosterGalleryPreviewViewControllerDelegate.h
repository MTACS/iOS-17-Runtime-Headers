
@protocol PBFPosterGalleryPreviewViewControllerDelegate <PREditingSceneViewControllerDelegate>

@required

- (void)galleryViewController:(PBFPosterGalleryPreviewViewController *)arg1 didSelectPreview:(id <PBFPosterPreview>)arg2 fromPreviewView:(PBFPosterGalleryPreviewView *)arg3;

@optional

- (<UIViewControllerAnimatedTransitioning> *)galleryViewController:(PBFPosterGalleryPreviewViewController *)arg1 willUseAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2 forDismissingEditingViewControllerWithAction:(long long)arg3;

@end
