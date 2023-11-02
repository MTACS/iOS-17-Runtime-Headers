
@protocol MRUMediaSuggestionsDataSourceDelegate <NSObject>

@required

- (void)mediaSuggestionsDataSource:(id <MRUMediaSuggestionsDataSource>)arg1 didChangeMediaSuggestions:(NSDictionary *)arg2;

@end
