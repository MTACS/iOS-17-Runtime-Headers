
@interface MPModelLibraryPlaylistEditTrackDataSource : MPModelLibraryPlaylistEditDataSource {
    MPModelPlaylistEntry * _playlistEntry;
    MPModelObject * _track;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithTrackObject:(id)arg1;
- (void)loadEntriesWithCompletion:(id /* block */)arg1;

@end
