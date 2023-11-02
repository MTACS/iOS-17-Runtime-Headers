
@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray *favoritedLocations;
@property (readonly) bool isGathering;

+ (id)favoritesCollection;
+ (id)sharedManager;

- (id)_newlyComputedRanksForItems:(id)arg1;
- (void)_reverseInsertAll:(id)arg1 atIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)addFavorite:(id)arg1 completion:(id /* block */)arg2;
- (void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(id /* block */)arg3;
- (id)favoritedLocations;
- (void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)insertFavorites:(id)arg1 atIndex:(long long)arg2 completion:(id /* block */)arg3;
- (bool)isGathering;
- (void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)redistributeRanksCompletion:(id /* block */)arg1;
- (void)removeFavorite:(id)arg1 completion:(id /* block */)arg2;
- (void)runInMainThread:(id /* block */)arg1;
- (void)updateFavoritesRanksToMatchOrderedFavorites:(id)arg1 completion:(id /* block */)arg2;

@end
