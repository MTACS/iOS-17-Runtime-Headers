
@protocol PXPhotosBannerProvider <NSObject>

@required

- (<PXPhotosBannerInvalidationDelegate> *)invalidationDelegate;
- (void)loadBannerView:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView<PXPhotosBannerView> *, void*
- (<PXPhotosBannerPresentationDelegate> *)presentationDelegate;
- (void)setInvalidationDelegate:(id <PXPhotosBannerInvalidationDelegate>)arg1;
- (void)setPresentationDelegate:(id <PXPhotosBannerPresentationDelegate>)arg1;

@end
