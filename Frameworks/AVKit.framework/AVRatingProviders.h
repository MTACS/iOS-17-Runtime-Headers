
@interface AVRatingProviders : NSObject {
    NSDictionary * _mapForMovies;
    NSDictionary * _mapForTVShows;
    NSDictionary * _plist;
}

@property (nonatomic, readonly) NSDictionary *mapForMovies;
@property (nonatomic, readonly) NSDictionary *mapForTVShows;
@property (nonatomic, copy) NSDictionary *plist;

+ (id)ratingProvidersWithName:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)_loadRatingMapsIfNeeded;
- (void)_loadRatingsMaps;
- (id)_movieMapForRating:(id)arg1;
- (id)_tvShowsMapForRating:(id)arg1;
- (id)findRatingString:(id)arg1;
- (id)findRatingString:(id)arg1 domain:(long long)arg2 country:(id)arg3 shouldPreferTVDomain:(bool)arg4;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (id)mapForMovies;
- (id)mapForTVShows;
- (id)plist;
- (void)setPlist:(id)arg1;

@end
