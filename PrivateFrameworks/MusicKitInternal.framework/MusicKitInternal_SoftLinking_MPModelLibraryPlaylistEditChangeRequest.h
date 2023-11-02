
@interface MusicKitInternal_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MPModelLibraryPlaylistEditChangeRequest * _underlyingRequest;
}

- (void).cxx_destruct;
- (void)_performWithRequest:(id)arg1 completionPolicy:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithParentPlaylist:(id)arg1 playlistEntries:(id)arg2 playlistName:(id)arg3 playlistDescription:(id)arg4 playlistUserImage:(struct CGImage { }*)arg5 coverArtworkRecipe:(id)arg6 publicPlaylist:(id)arg7 visiblePlaylist:(id)arg8 authorStoreIdentifier:(id)arg9;
- (id)initWithPlaylist:(id)arg1 playlistEntries:(id)arg2 playlistName:(id)arg3 playlistDescription:(id)arg4 playlistUserImage:(struct CGImage { }*)arg5 publicPlaylist:(id)arg6 visiblePlaylist:(id)arg7 authorStoreIdentifier:(id)arg8;
- (void)performWithCompletionPolicy:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
