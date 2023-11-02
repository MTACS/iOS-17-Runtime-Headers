
@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <NSCopying> {
    NSDictionary * _invitationsBySharedAlbumObjectID;
    PHFetchResult * _sharedAlbums;
}

@property (nonatomic, readonly) NSDictionary *invitationsBySharedAlbumObjectID;
@property (nonatomic, readonly) PHFetchResult *sharedAlbums;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSharedAlbums:(id)arg1 invitationsBySharedAlbumObjectID:(id)arg2;
- (id)invitationsBySharedAlbumObjectID;
- (id)sharedAlbums;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;

@end
