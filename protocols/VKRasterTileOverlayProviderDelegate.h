
@protocol VKRasterTileOverlayProviderDelegate <NSObject>

@required

- (void)rasterTileOverlayDidChangeAlpha:(VKRasterTileOverlayProviderData *)arg1;
- (void)rasterTileOverlayNeedsDisplay:(VKRasterTileOverlayProviderData *)arg1;
- (void)rasterTileOverlayNeedsInvalidate:(VKRasterTileOverlayProviderData *)arg1;

@end
