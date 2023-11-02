
@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, retain) SALocalSearchReviewList *reviewList;

+ (id)reviewListSnippet;
+ (id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieName;
- (id)reviewList;
- (void)setMovieName:(id)arg1;
- (void)setReviewList:(id)arg1;

@end
