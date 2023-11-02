
@interface VUIFamilySharingMenuDataSource : VUILibraryMenuDataSource {
    NSArray * _genres;
    bool  _hasFetchedGenres;
    bool  _hasFetchedMovies;
    bool  _hasFetchedRecentPurchases;
    bool  _hasFetchedShows;
    bool  _hasMovies;
    bool  _hasRecentPurchases;
    bool  _hasShows;
    VUIMediaAPIClient * _mediaClient;
    NSString * _ownerIdentifier;
}

@property (nonatomic, retain) NSArray *genres;
@property (nonatomic) bool hasFetchedGenres;
@property (nonatomic) bool hasFetchedMovies;
@property (nonatomic) bool hasFetchedRecentPurchases;
@property (nonatomic) bool hasFetchedShows;
@property (nonatomic) bool hasMovies;
@property (nonatomic) bool hasRecentPurchases;
@property (nonatomic) bool hasShows;
@property (nonatomic, retain) VUIMediaAPIClient *mediaClient;
@property (nonatomic, retain) NSString *ownerIdentifier;

- (void).cxx_destruct;
- (id /* block */)_categoryTypesSortComparator;
- (id)_constructGenreMenuItems;
- (id)_constructMainMenuItems;
- (id)_constructVUIMenuDataSource;
- (void)_fetchGenres;
- (void)_fetchMovies;
- (void)_fetchRecentPurchases;
- (void)_fetchShows;
- (bool)_hasCompletedAllFetches;
- (void)_notifyDelegatesFetchDidComplete;
- (id)genres;
- (id)getGenreByGenreTitle:(id)arg1;
- (bool)hasFetchedGenres;
- (bool)hasFetchedMovies;
- (bool)hasFetchedRecentPurchases;
- (bool)hasFetchedShows;
- (bool)hasMovies;
- (bool)hasRecentPurchases;
- (bool)hasShows;
- (id)initWithValidCategories:(id)arg1;
- (id)mediaClient;
- (id)ownerIdentifier;
- (void)setGenres:(id)arg1;
- (void)setHasFetchedGenres:(bool)arg1;
- (void)setHasFetchedMovies:(bool)arg1;
- (void)setHasFetchedRecentPurchases:(bool)arg1;
- (void)setHasFetchedShows:(bool)arg1;
- (void)setHasMovies:(bool)arg1;
- (void)setHasRecentPurchases:(bool)arg1;
- (void)setHasShows:(bool)arg1;
- (void)setMediaClient:(id)arg1;
- (void)setOwnerIdentifier:(id)arg1;
- (void)startFetch;

@end
