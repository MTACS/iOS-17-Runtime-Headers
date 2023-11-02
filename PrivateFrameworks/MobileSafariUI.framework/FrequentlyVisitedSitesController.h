
@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection * _bookmarkCollection;
    bool  _bookmarksNeedToSave;
    NSMutableArray * _cachedFrequentlyVisitedBookmarks;
    WBTabCollection * _tabCollection;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (void)_deleteFrequentlyVisistedSiteInCurrentPofile:(id)arg1;
- (id)_frequentlyVisitedSitesURLStringSet;
- (void)_saveFrequentlyVisitedSites:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(bool)arg2;
- (bool)bookmarkIsFrequentlyVistedSite:(id)arg1;
- (void)clearFrequentlyVisitedSites;
- (void)dealloc;
- (id)frequentlyVisitedSites;
- (id)initWithBookmarkCollection:(id)arg1 history:(id)arg2 bannedURLStore:(id)arg3 tabCollection:(id)arg4 profileIdentifier:(id)arg5;
- (void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)arg1;

@end
