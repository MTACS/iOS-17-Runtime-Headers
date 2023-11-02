
@interface MPModelLibraryPlaylistEditAlbumDataSource : MPModelLibraryPlaylistEditDataSource {
    MPModelAlbum * _album;
    MPMediaLibrary * _library;
    MPPropertySet * _trackPropertySet;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithLibrary:(id)arg1 album:(id)arg2 trackProperties:(id)arg3;
- (void)loadEntriesWithCompletion:(id /* block */)arg1;

@end
