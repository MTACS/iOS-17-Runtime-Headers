
@interface SAMicroblogSearchResultsSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *searches;

+ (id)searchResultsSnippet;
+ (id)searchResultsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)searches;
- (void)setSearches:(id)arg1;

@end
