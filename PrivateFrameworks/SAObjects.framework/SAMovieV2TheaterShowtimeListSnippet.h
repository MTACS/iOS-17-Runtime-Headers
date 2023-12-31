
@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (nonatomic, retain) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (nonatomic, copy) NSArray *theaterShowtimeListCells;

+ (id)theaterShowtimeListSnippet;
+ (id)theaterShowtimeListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieDetailSnippet;
- (void)setMovieDetailSnippet:(id)arg1;
- (void)setTheaterShowtimeListCells:(id)arg1;
- (id)theaterShowtimeListCells;

@end
