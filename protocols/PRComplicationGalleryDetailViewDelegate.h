
@protocol PRComplicationGalleryDetailViewDelegate <NSObject>

@required

- (void)complicationGalleryView:(void *)arg1 didUpdateVisiblePagesWithAppearedBlock:(void *)arg2; // needs 2 arg types, found 7: PRComplicationGalleryDetailView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, unsigned long long, void*
- (void)complicationGalleryViewDidTapClose:(PRComplicationGalleryDetailView *)arg1;
- (void)complicationGalleryViewShouldUpdateParallax:(PRComplicationGalleryDetailView *)arg1;

@end
