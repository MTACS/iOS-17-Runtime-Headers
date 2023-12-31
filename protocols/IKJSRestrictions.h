
@protocol IKJSRestrictions <JSExport>

@required

- (bool)allowsErotica;
- (bool)allowsExplicit;
- (bool)allowsMusicVideos;
- (long long)maxMovieRank;
- (NSString *)maxMovieRatingForCountry:(JSValue *)arg1;
- (long long)maxTVShowRank;
- (NSString *)maxTVShowRatingForCountry:(JSValue *)arg1;

@end
