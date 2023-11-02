
@protocol MRUMediaSuggestionsDataSource <NSObject>

@required

- (<MRUMediaSuggestionsDataSourceDelegate> *)delegate;
- (NSDictionary *)mediaSuggestions;
- (void)refreshMediaSuggestions;
- (void)setDelegate:(id <MRUMediaSuggestionsDataSourceDelegate>)arg1;

@end
