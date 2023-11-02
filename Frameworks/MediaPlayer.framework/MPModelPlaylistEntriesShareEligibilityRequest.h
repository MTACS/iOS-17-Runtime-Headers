
@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying> {
    MPModelPlaylist * _playlist;
}

@property (nonatomic, readonly) MPModelPlaylist *playlist;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPlaylist:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playlist;

@end
