
@interface MusicKit_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MusicKit_SoftLinking_MPMediaLibrary * _mediaLibrary;
    MPModelLibraryPlaylistEditChangeRequest * _underlyingRequest;
}

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)arg1 playlistEntries:(id)arg2 playlistName:(id)arg3 playlistDescription:(id)arg4 authorDisplayName:(id)arg5;
- (id)initWithPlaylistEntries:(id)arg1 playlistName:(id)arg2 playlistDescription:(id)arg3 authorDisplayName:(id)arg4;
- (void)sdk_performWithCompletionHandler:(id /* block */)arg1;

@end
