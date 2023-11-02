
@protocol VKCustomTileOverlayProviderDelegate <NSObject>

@required

- (void)customTileOverlayDidChangeAlpha:(VKCustomTileOverlayProviderData *)arg1;
- (void)customTileOverlayDidChangeDisplayRate:(VKCustomTileOverlayProviderData *)arg1;
- (void)customTileOverlayNeedsDisplay:(VKCustomTileOverlayProviderData *)arg1;
- (void)customTileOverlayNeedsInvalidate:(VKCustomTileOverlayProviderData *)arg1;

@end
