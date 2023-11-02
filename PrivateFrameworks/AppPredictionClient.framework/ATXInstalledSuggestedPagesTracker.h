
@interface ATXInstalledSuggestedPagesTracker : NSObject {
    ATXGenericFileBasedCache * _cache;
    NSObject<OS_dispatch_queue> * _queue;
    ATXBiomeSuggestedHomePageStream * _suggestedHomePageStream;
}

- (void).cxx_destruct;
- (id)_allInstalledPages;
- (void)_serializePages:(id)arg1;
- (id)allInstalledPages;
- (id)identifierOfSuggestedPageForModeUUID:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)removePagesWithIdentifiersNotInSet:(id)arg1;
- (void)storePageIdentifier:(id)arg1 modeUUID:(id)arg2 forPageType:(long long)arg3;
- (long long)suggestedPageTypeWithIdentifier:(id)arg1;
- (void)trackSuggestedHomePageWithAction:(long long)arg1 pageType:(long long)arg2 identifier:(id)arg3;

@end
