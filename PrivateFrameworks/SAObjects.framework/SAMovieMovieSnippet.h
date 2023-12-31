
@interface SAMovieMovieSnippet : SAUISnippet

@property (nonatomic, retain) SAMovieMovie *movie;
@property (nonatomic) bool playTrailer;

+ (id)movieSnippet;
+ (id)movieSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movie;
- (bool)playTrailer;
- (void)setMovie:(id)arg1;
- (void)setPlayTrailer:(bool)arg1;

@end
