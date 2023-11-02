
@interface SAMovieV2MovieListCell : SADomainObject

@property (nonatomic, copy) NSArray *displayableShowtimes;
@property (nonatomic, retain) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, copy) NSArray *posterImages;
@property (nonatomic, copy) NSNumber *qualityRating;
@property (nonatomic, copy) NSString *rating;
@property (nonatomic, copy) NSDate *theatricalReleaseDate;

+ (id)movieListCell;
+ (id)movieListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)displayableShowtimes;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieDetailSnippet;
- (id)movieName;
- (id)posterImages;
- (id)qualityRating;
- (id)rating;
- (void)setDisplayableShowtimes:(id)arg1;
- (void)setMovieDetailSnippet:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (id)theatricalReleaseDate;

@end
