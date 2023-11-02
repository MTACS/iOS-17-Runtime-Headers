
@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation {
    NSError * _error;
    MPMediaLibrary * _mediaLibrary;
    VUIMediaItemEntityTypesFetchResponse * _response;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) VUIMediaItemEntityTypesFetchResponse *response;

- (void).cxx_destruct;
- (bool)_canUseCheapEntityCheckWithMediaEntityType:(id)arg1;
- (bool)_mediaLibraryHasEpisodes;
- (bool)_mediaLibraryHasHasHomeVideos;
- (bool)_mediaLibraryHasLocalMediaItems;
- (bool)_mediaLibraryHasMediaItemsWithQuery:(id)arg1;
- (bool)_mediaLibraryHasMovieRentals;
- (bool)_mediaLibraryHasMovies;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMPMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (id)response;
- (void)setError:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setResponse:(id)arg1;

@end
