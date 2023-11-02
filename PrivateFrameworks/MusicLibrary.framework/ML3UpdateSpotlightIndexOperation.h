
@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation {
    unsigned long long  _batchCount;
    unsigned long long  _bundle;
    NSString * _bundleIdentifier;
    CSSearchableIndex * _index;
}

@property (nonatomic) unsigned long long batchCount;
@property (nonatomic) unsigned long long bundle;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) CSSearchableIndex *index;

- (void).cxx_destruct;
- (bool)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg1 playlistsPersistentIDsToUpdateSet:(id)arg2 entityStringsToDelete:(id)arg3 currentRevision:(id)arg4 targetRevision:(id)arg5 error:(id*)arg6;
- (id)_createSearchableItemsForPlaylistsWithQuery:(id)arg1 error:(id*)arg2;
- (id)_createSearchableItemsForTracksWithQuery:(id)arg1 error:(id*)arg2;
- (id)_createSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id*)arg3;
- (bool)_deleteAllIndexedItemsWithError:(id*)arg1;
- (bool)_deleteIndexedItemsWithEntityStringIDs:(id)arg1 error:(id*)arg2;
- (bool)_enumerateSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)_execute:(id*)arg1;
- (bool)_indexItemsFromLibrarySinceRevision:(long long)arg1 targetRevision:(long long)arg2 error:(id*)arg3;
- (bool)_indexTracksWithPersistentIDs:(id)arg1 playlistsWithPersistentIDs:(id)arg2 error:(id*)arg3;
- (id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)arg1 inContainerPIDs:(id)arg2;
- (bool)_updateIndexedItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1;
- (unsigned long long)batchCount;
- (unsigned long long)bundle;
- (id)bundleIdentifier;
- (id)index;
- (void)setBatchCount:(unsigned long long)arg1;
- (void)setBundle:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIndex:(id)arg1;
- (unsigned long long)type;

@end
