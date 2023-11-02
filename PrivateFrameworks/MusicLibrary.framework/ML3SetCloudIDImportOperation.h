
@interface ML3SetCloudIDImportOperation : ML3ImportOperation {
    NSArray * _playlistInfo;
    NSArray * _trackInfo;
}

- (void).cxx_destruct;
- (bool)_importPlaylistsUsingImportSession:(void*)arg1;
- (bool)_importTracksUsingImportSession:(void*)arg1;
- (bool)_performImportWithTransaction:(id)arg1;
- (unsigned long long)importSource;
- (void)main;

@end
