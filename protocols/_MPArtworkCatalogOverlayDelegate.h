
@protocol _MPArtworkCatalogOverlayDelegate <NSObject>

@optional

- (void)artworkCatalog:(MPArtworkCatalog *)arg1 didClearFromView:(UIView *)arg2;
- (void)artworkCatalog:(MPArtworkCatalog *)arg1 didConfigureView:(UIView *)arg2 withRepresentation:(MPArtworkRepresentationCollection *)arg3;
- (void)artworkCatalog:(MPArtworkCatalog *)arg1 willConfigureView:(UIView *)arg2;
- (struct CGSize { double x1; double x2; })overlayScaledFittingSizeForCatalog:(MPArtworkCatalog *)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (<MPArtworkDataSourceVisualIdenticality> *)overlayVisualIdenticalityForCatalog:(MPArtworkCatalog *)arg1;

@end
