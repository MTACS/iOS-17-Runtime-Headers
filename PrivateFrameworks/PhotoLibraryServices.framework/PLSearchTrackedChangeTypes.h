
@interface PLSearchTrackedChangeTypes : NSObject {
    PLSearchTrackedAttributes * _searchTrackedAttributes;
}

@property (nonatomic, retain) PLSearchTrackedAttributes *searchTrackedAttributes;

+ (id)entityNamesIndexedBySearch;
+ (bool)isEntityIndexedBySearch:(id)arg1;

- (void).cxx_destruct;
- (id)_changesTrackedBySearchForEntity:(id)arg1;
- (id)searchTrackedAttributes;
- (void)setSearchTrackedAttributes:(id)arg1;
- (bool)shouldUpdateSearchIndexForChange:(id)arg1 entityName:(id)arg2 photoLibrary:(id)arg3;
- (id)trackedEntityNameForChange:(id)arg1 photoLibrary:(id)arg2;
- (id)uuidForPersistentHistoryDeletionChange:(id)arg1 photoLibrary:(id)arg2;

@end
