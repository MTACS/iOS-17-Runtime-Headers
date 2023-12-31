
@interface SXGalleryItemImageView : SXImageView {
    SXGalleryItem * _galleryItem;
}

@property (nonatomic, readonly) SXGalleryItem *galleryItem;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)galleryItem;
- (id)initWithGalleryItem:(id)arg1 imageResource:(id)arg2 resourceDataSource:(id)arg3 reachabilityProvider:(id)arg4;
- (bool)isAccessibilityElement;

@end
