
@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (nonatomic, retain) SAMicroblogTwitterPostAuthor *globalAuthor;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSArray *resultNews;
@property (nonatomic, copy) NSArray *resultPosts;
@property (nonatomic, copy) NSArray *resultUsers;
@property (nonatomic, retain) SADecoratedString *summary;
@property (nonatomic, copy) NSURL *webAddress;

+ (id)aceMicroblogSearchResult;
+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)globalAuthor;
- (id)groupIdentifier;
- (id)punchOut;
- (id)query;
- (id)resultNews;
- (id)resultPosts;
- (id)resultUsers;
- (void)setGlobalAuthor:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResultNews:(id)arg1;
- (void)setResultPosts:(id)arg1;
- (void)setResultUsers:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setWebAddress:(id)arg1;
- (id)summary;
- (id)webAddress;

@end
