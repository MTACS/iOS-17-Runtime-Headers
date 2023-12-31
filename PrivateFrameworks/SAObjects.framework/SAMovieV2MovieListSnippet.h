
@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *movieListCells;
@property (nonatomic, retain) SALocalSearchBusiness2 *theater;

+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieListCells;
- (void)setMovieListCells:(id)arg1;
- (void)setTheater:(id)arg1;
- (id)theater;

@end
