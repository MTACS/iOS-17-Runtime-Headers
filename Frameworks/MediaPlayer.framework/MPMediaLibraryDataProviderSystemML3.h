
@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
    long long  _currentRevision;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_localizedCloudGeniusErrorForError:(id)arg1;
+ (id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(bool)arg2;

- (void).cxx_destruct;
- (long long)_currentRevision;
- (void)_initInstanceVariableOnce;
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(id /* block */)arg3;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
- (id)errorResolverForItem:(id)arg1;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithLibrary:(id)arg1;
- (bool)isGeniusEnabled;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3;
- (void)updateEntitesToCurrentRevision;

@end
