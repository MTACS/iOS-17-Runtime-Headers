
@interface SearchUIShortcutsAppTopHitAsyncSectionLoader : SearchUICoreSpotlightAppTopHitAsyncSectionLoader {
    NSMutableArray * _foundItems;
    NSRecursiveLock * _lock;
    CSSearchQuery * _query;
}

@property (nonatomic, retain) NSMutableArray *foundItems;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic, retain) CSSearchQuery *query;

+ (bool)supportsSectionModel:(id)arg1;

- (void).cxx_destruct;
- (id)buildCardSectionsForFoundItems:(id)arg1;
- (id)buildSearchQueryForBundleIdentifier:(id)arg1;
- (id)foundItems;
- (id)lock;
- (id)query;
- (void)setFoundItems:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setQuery:(id)arg1;

@end
