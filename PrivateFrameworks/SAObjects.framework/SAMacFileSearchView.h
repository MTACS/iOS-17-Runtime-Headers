
@interface SAMacFileSearchView : SAAceView

@property (nonatomic, copy) NSArray *entities;
@property (nonatomic) long long numResults;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *searchTitle;

+ (id)fileSearchView;
+ (id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entities;
- (id)groupIdentifier;
- (long long)numResults;
- (id)query;
- (id)searchTitle;
- (void)setEntities:(id)arg1;
- (void)setNumResults:(long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setSearchTitle:(id)arg1;

@end
