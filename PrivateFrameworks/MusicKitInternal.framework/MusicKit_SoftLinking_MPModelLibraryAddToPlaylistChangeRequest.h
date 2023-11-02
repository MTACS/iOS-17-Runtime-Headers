
@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject {
    id /* block */  _storeImportAllowedHandler;
    MPModelLibraryAddToPlaylistChangeRequest * _underlyingAddToPlaylistChangeRequest;
}

@property (nonatomic, readonly) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
@property (nonatomic, copy) id /* block */ storeImportAllowedHandler;

- (void).cxx_destruct;
- (id)_underlyingLibraryAddToPlaylistChangeRequest;
- (id)initWithPlaylist:(id)arg1 songIdentifiers:(id)arg2 representativeObject:(id)arg3 referralObject:(id)arg4;
- (void)setStoreImportAllowedHandler:(id /* block */)arg1;
- (id /* block */)storeImportAllowedHandler;

@end
