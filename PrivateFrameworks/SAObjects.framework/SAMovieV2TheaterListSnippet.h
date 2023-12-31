
@interface SAMovieV2TheaterListSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *theaterListCells;

+ (id)theaterListSnippet;
+ (id)theaterListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTheaterListCells:(id)arg1;
- (id)theaterListCells;

@end
