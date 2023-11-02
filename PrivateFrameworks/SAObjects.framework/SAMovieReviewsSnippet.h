
@interface SAMovieReviewsSnippet : SAUISnippet

@property (nonatomic, retain) SAMovieMovie *movie;

+ (id)reviewsSnippet;
+ (id)reviewsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movie;
- (void)setMovie:(id)arg1;

@end
