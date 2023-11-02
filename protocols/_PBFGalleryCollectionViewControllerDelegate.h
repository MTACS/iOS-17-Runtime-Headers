
@protocol _PBFGalleryCollectionViewControllerDelegate <NSObject>

@required

- (void)galleryCollectionViewControllerDidSelectPreview:(id <PBFPosterPreview>)arg1 fromPreviewView:(PBFPosterGalleryPreviewView *)arg2;
- (void)galleryCollectionViewControllerWillDisplayPreview:(id <PBFPosterPreview>)arg1;

@end
