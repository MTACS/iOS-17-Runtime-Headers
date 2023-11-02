
@interface _SFFaviconProvider : WBSFaviconProvider {
    NSCache * _monogramTitleToImageCache;
}

+ (id)_faviconWithSystemImageNamed:(id)arg1;
+ (id)bookmarksFavicon;
+ (id)fallbackFavicon;
+ (id)favoritesFavicon;
+ (id)historyFavicon;
+ (id)readingListFavicon;
+ (id)sharedWithYouFavicon;

- (void).cxx_destruct;
- (id)fallbackIconForRequest:(id)arg1;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)arg7;

@end
