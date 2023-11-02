
@protocol MapsSuggestionsSourceDelegate <NSObject>

@required

- (unsigned long long)addOrUpdateSuggestionEntries:(NSArray *)arg1 source:(NSString *)arg2;
- (bool)attachSource:(id <MapsSuggestionsSource>)arg1;
- (bool)detachSource:(id <MapsSuggestionsSource>)arg1;

@end
