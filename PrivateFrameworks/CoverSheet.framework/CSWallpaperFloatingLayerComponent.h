
@interface CSWallpaperFloatingLayerComponent : CSComponent

@property (nonatomic) bool shouldMatchMove;
@property (nonatomic) bool shouldRenderForPosterSwitcher;
@property (nonatomic) bool shouldRenderInline;

- (id)init;
- (void)setShouldMatchMove:(bool)arg1;
- (void)setShouldRenderForPosterSwitcher:(bool)arg1;
- (void)setShouldRenderInline:(bool)arg1;
- (bool)shouldMatchMove;
- (id)shouldMatchMove:(bool)arg1;
- (bool)shouldRenderForPosterSwitcher;
- (id)shouldRenderForPosterSwitcher:(bool)arg1;
- (bool)shouldRenderInline;
- (id)shouldRenderInline:(bool)arg1;

@end
