
@interface MPModelLibraryStartCollaborationChangeRequest : NSObject <NSCopying> {
    long long  _collaborationSharingMode;
    NSOperationQueue * _operationQueue;
    MPModelPlaylist * _playlistToConvert;
}

@property (nonatomic) long long collaborationSharingMode;
@property (nonatomic, retain) MPModelPlaylist *playlistToConvert;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (long long)collaborationSharingMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)playlistToConvert;
- (void)setCollaborationSharingMode:(long long)arg1;
- (void)setPlaylistToConvert:(id)arg1;

@end
