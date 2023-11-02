
@protocol PXFavoritesSettingsDelegate <NSObject>

@optional

- (void)favoritesSettings:(void *)arg1 loadAccessorySettingsWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: PXFavoritesSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)favoritesSettingsDidChangeFavorites:(PXFavoritesSettings *)arg1;

@end
