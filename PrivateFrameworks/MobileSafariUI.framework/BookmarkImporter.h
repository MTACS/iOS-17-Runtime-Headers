
@interface BookmarkImporter : NSObject {
    NSArray * _carrierBookmarkInfo;
    WebBookmarkCollection * _collection;
    NSArray * _oldDeletedStaticBookmarks;
}

- (void).cxx_destruct;
- (void)_appendBookmarksFromSource:(id)arg1 toParent:(int)arg2;
- (void)_appendBuiltinBookmarkWithInfo:(id)arg1 toParent:(int)arg2 asCarrierBookmark:(bool)arg3;
- (id)_builtInBookmarkItemWithTemplate:(id)arg1 forLocale:(id)arg2 deviceClass:(long long)arg3;
- (id)_builtinBookmarkWithInfo:(id)arg1 asCarrierBookmark:(bool)arg2;
- (id)_builtinFavoritesForLocale:(id)arg1 deviceClass:(long long)arg2;
- (id)_carrierBundleBuiltinBookmarkInfo;
- (void)_clearOldDeletedStaticBookmarks;
- (long long)_currentDeviceClass;
- (void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(id /* block */)arg1;
- (id)_googleChannelReplacementStringForDeviceClass:(long long)arg1;
- (void)_importCarrierBookmarksIfNecessary;
- (void)_importCarrierBookmarksIfNecessaryAsync;
- (void)_importFavoritesFolderBuiltinBookmarks;
- (void)_importRootFolderBuiltinBookmarks;
- (id)_lastImportedCarrierBookmarksInfo;
- (id)_myAccountBookmarkInfo;
- (id)_oldDeletedStaticBookmarks;
- (void)_setLastImportedCarrierBookmarksInfo:(id)arg1;
- (id)_uniqueYouTubeBookmarkFolderName;
- (void)importBuiltinBookmarks;
- (id)initWithBookmarkCollection:(id)arg1;
- (void)migrateYouTubeBookmarks;
- (id)test_builtinFavoritesForLocale:(id)arg1 deviceClass:(long long)arg2;

@end
