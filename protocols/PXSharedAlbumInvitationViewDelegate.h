
@protocol PXSharedAlbumInvitationViewDelegate <NSObject>

@optional

- (void)sharedAlbumInvitationView:(PXSharedAlbumInvitationView *)arg1 didAccept:(bool)arg2;
- (void)sharedAlbumInvitationView:(PXSharedAlbumInvitationView *)arg1 presentViewController:(UIViewController *)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(PXSharedAlbumInvitationView *)arg1;

@end
