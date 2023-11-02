
@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>

@required

- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didRequestPictureInPictureStopForViewController:(PGPictureInPictureViewController *)arg2 sourceSceneSessionIdentifier:(NSString *)arg3 animated:(bool)arg4;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(void *)arg1 requestActivationOfSceneWithPersistenceIdentier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PGPictureInPictureRemoteObject *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (bool)pictureInPictureRemoteObjectHasBackgroundPIPAuthorization:(PGPictureInPictureRemoteObject *)arg1;
- (void)pictureInPictureRemoteObjectNeedsActivationAndInterruptionPolicyUpdate:(PGPictureInPictureRemoteObject *)arg1;
- (bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(PGPictureInPictureRemoteObject *)arg1;
- (bool)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(PGPictureInPictureRemoteObject *)arg1;
- (bool)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(PGPictureInPictureRemoteObject *)arg1;

@end
