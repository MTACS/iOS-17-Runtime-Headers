
@interface SAMovieMovieListSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *movies;
@property (nonatomic) bool shouldShowRottenTomatoesRating;

+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movies;
- (void)setMovies:(id)arg1;
- (void)setShouldShowRottenTomatoesRating:(bool)arg1;
- (bool)shouldShowRottenTomatoesRating;

@end
