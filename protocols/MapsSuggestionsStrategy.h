
@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>

@required

- (void)addDeduper:(id <MapsSuggestionsDeduper>)arg1;
- (void)addImprover:(id <MapsSuggestionsImprover>)arg1;
- (void)addPostFilter:(id <MapsSuggestionsFilter>)arg1;
- (void)addPreFilter:(id <MapsSuggestionsFilter>)arg1;
- (void)clearData;
- (MapsSuggestionsManager *)manager;
- (bool)postFiltersKept:(MapsSuggestionsEntry *)arg1;
- (bool)preFiltersKept:(MapsSuggestionsEntry *)arg1;
- (void)removeAllDedupers;
- (void)removeAllFilters;
- (void)removeAllImprovers;
- (void)removeFilter:(id <MapsSuggestionsFilter>)arg1;
- (void)setManager:(MapsSuggestionsManager *)arg1;
- (NSArray *)topSuggestionsWithSourceEntries:(NSDictionary *)arg1 error:(id*)arg2;

@end
