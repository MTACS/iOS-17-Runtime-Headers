
@interface _SFTouchIconCache : WBSTouchIconCache

+ (id)_generateDefaultFavoritesIcon;
+ (id)_monogramConfiguration;
+ (id)defaultBackgroundColor;

- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (id)_operationWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canHandleRequest:(id)arg1;

@end
