
@interface PGSearchKeywordComputer : NSObject {
    PGGraph * _graph;
    CLSHolidayCalendarEventService * _holidayService;
    NSDictionary * _personLocalIdentifiersBySocialGroupUUID;
    PGSearchComputationCache * _searchComputationCache;
    NSLocale * _userLocale;
}

@property (nonatomic, readonly) PGSearchComputationCache *searchComputationCache;

- (void).cxx_destruct;
- (void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateEventNodesForUUIDs:(id)arg1 ofType:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)_holidayNodesForTimedEvent:(id)arg1;
- (id)_personLocalIdentifiersBySocialGroupUUIDWithPhotoLibrary:(id)arg1 graph:(id)arg2;
- (id)_personUUIDsInSocialGroupNode:(id)arg1 photoLibrary:(id)arg2;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 progressBlock:(id /* block */)arg3;
- (id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2;
- (id)searchComputationCache;
- (id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 photoLibrary:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 inPhotoLibrary:(id)arg3 isFullAnalysis:(bool)arg4 progressBlock:(id /* block */)arg5;

@end
