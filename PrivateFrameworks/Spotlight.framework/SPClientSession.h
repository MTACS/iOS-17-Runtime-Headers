
@interface SPClientSession : NSObject {
    long long  _contentFilter;
    SPSearchQueryContext * _currentQueryContext;
    bool  _infinitePatience;
    SPSearchQuery * _lastQuery;
    NSArray * _lastSections;
    long long  _maxUISuggestions;
    bool  _observersAdded;
    int  _prefsToken;
    NSArray * _searchDomains;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sectionsLock;
}

@property (retain) SPSearchQueryContext *currentQueryContext;
@property (readonly) NSArray *disabledBundleIds;
@property (nonatomic) bool infinitePatience;
@property long long maxUISuggestions;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_setSearchDomains:(id)arg1;
- (void)activate;
- (long long)contentFilters;
- (id)copyStaleSectionsForQuery:(id)arg1;
- (id)currentQueryContext;
- (void)deactivate;
- (id)disabledBundleIds;
- (void)finishRanking:(id)arg1 blendingDuration:(double)arg2;
- (bool)infinitePatience;
- (id)init;
- (long long)maxUISuggestions;
- (void)preheat;
- (id)queryTaskWithContext:(id)arg1;
- (void)setCurrentQueryContext:(id)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setLastSections:(id)arg1 forQuery:(id)arg2;
- (void)setMaxUISuggestions:(long long)arg1;

@end
