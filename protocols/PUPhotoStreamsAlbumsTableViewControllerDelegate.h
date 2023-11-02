
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate <NSObject>

@required

- (void)controller:(PUPhotoStreamAlbumsTableViewController *)arg1 didSelectAlbum:(NSObject<PLAlbumProtocol> *)arg2;
- (void)controllerWillCreateNewAlbum:(PUPhotoStreamAlbumsTableViewController *)arg1;

@end
