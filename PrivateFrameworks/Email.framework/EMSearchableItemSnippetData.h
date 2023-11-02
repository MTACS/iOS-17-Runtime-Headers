
@interface EMSearchableItemSnippetData : NSObject {
    NSString * _searchableItemIdentifier;
    NSDictionary * _snippetHints;
}

@property (nonatomic, copy) NSString *searchableItemIdentifier;
@property (nonatomic, copy) NSDictionary *snippetHints;

- (void).cxx_destruct;
- (id)initWithSearchableItemIdentifier:(id)arg1 snippetHints:(id)arg2;
- (id)searchableItemIdentifier;
- (void)setSearchableItemIdentifier:(id)arg1;
- (void)setSnippetHints:(id)arg1;
- (id)snippetHints;

@end
