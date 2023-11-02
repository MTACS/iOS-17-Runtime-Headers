
@interface ML3StoreImportOperation : ML3ImportOperation {
    ML3StoreItemAlbumArtistData * _albumArtistData;
    ML3StoreItemPlaylistData * _playlistData;
    ML3StoreItemTrackData * _trackData;
}

- (void).cxx_destruct;
- (bool)_importAlbumArtistsUsingImportSession:(void*)arg1;
- (bool)_importPlaylistsUsingImportSession:(void*)arg1;
- (bool)_importTracksUsingImportSession:(void*)arg1;
- (bool)_performImportWithTransaction:(id)arg1;
- (unsigned long long)importSource;
- (void)main;

@end
