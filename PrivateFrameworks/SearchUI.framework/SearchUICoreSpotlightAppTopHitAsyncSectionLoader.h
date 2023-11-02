
@interface SearchUICoreSpotlightAppTopHitAsyncSectionLoader : SearchUIAppTopHitAsyncSectionLoader {
    NSMutableArray * _foundItems;
    NSRecursiveLock * _lock;
    CSSearchQuery * _query;
}

@property (nonatomic, retain) NSMutableArray *foundItems;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic, retain) CSSearchQuery *query;

- (void).cxx_destruct;
- (id)buildCardSectionsForFoundItems:(id)arg1;
- (id)buildSearchQueryForBundleIdentifier:(id)arg1;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (id)foundItems;
- (id)initWithSectionModel:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (id)lock;
- (id)query;
- (id)responseForFoundItems:(id)arg1 animated:(bool)arg2;
- (void)setFoundItems:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setQuery:(id)arg1;

@end
