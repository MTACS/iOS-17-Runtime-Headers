
@interface MPModelLibraryPlaylistEditPlaylistDataSource : MPModelLibraryPlaylistEditDataSource {
    bool  _hasPerformedInitialLoad;
    MPSectionedCollection * _initialTrackList;
    MPMediaLibrary * _library;
    MPModelPlaylist * _playlist;
    MPPropertySet * _playlistPropertySet;
}

- (void).cxx_destruct;
- (id)_defaultPlaylistEntryPropertySet;
- (id)description;
- (id)initWithLibrary:(id)arg1 playlist:(id)arg2 initialTrackList:(id)arg3 playlistEntryProperties:(id)arg4;
- (void)loadEntriesWithCompletion:(id /* block */)arg1;

@end
