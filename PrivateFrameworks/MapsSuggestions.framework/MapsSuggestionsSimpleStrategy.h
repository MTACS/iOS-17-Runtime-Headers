
@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {
    NSMutableArray * _dedupers;
    NSMutableArray * _improvers;
    MapsSuggestionsManager * _manager;
    NSMutableSet * _postFilters;
    NSMutableSet * _preFilters;
    NSMutableArray * _previousResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MapsSuggestionsManager *manager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)addDeduper:(id)arg1;
- (void)addImprover:(id)arg1;
- (void)addPostFilter:(id)arg1;
- (void)addPreFilter:(id)arg1;
- (void)clearData;
- (id)init;
- (id)manager;
- (bool)postFiltersKept:(id)arg1;
- (bool)preFiltersKept:(id)arg1;
- (void)removeAllDedupers;
- (void)removeAllFilters;
- (void)removeAllImprovers;
- (void)removeFilter:(id)arg1;
- (void)setManager:(id)arg1;
- (id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2;
- (id)uniqueName;

@end
