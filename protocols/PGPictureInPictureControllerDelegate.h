
@protocol PGPictureInPictureControllerDelegate <NSObject>

@optional

- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didRequestStopForPictureInPictureViewController:(PGPictureInPictureViewController *)arg2 sourceSceneSessionIdentifier:(NSString *)arg3 animated:(bool)arg4;
- (void)pictureInPictureController:(void *)arg1 requestActivationOfSceneWithPersistenceIdentier:(void *)arg2 pictureInPictureViewController:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: PGPictureInPictureController *, NSString *, PGPictureInPictureViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)pictureInPictureController:(PGPictureInPictureController *)arg1 shouldAuthorizeBackgroundPIPForAppWithBundleIdentifier:(NSString *)arg2;
- (bool)pictureInPictureController:(PGPictureInPictureController *)arg1 shouldCancelPictureInPictureForApplication:(PGPictureInPictureApplication *)arg2 whenStartingPictureInPictureForApplication:(PGPictureInPictureApplication *)arg3;
- (bool)pictureInPictureController:(PGPictureInPictureController *)arg1 shouldDenyNewConnection:(NSXPCConnection *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (bool)pictureInPictureControllerCanBackgroundStartForFaceTimeVideoCall:(PGPictureInPictureController *)arg1;

@end
