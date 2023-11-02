
@protocol PULivePhotoVideoOverlayTileViewControllerDelegate <NSObject>

@required

- (bool)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(PULivePhotoVideoOverlayTileViewController *)arg1 locationProvider:(id <PUDisplayLocationProvider>)arg2;
- (struct CGImage { }*)livePhotoVideoPlaybackTileViewControllerCurrentGainMapImage:(PULivePhotoVideoOverlayTileViewController *)arg1 outGainMapAvailable:(bool*)arg2 outGainMapValue:(float*)arg3;
- (UIImage *)livePhotoVideoPlaybackTileViewControllerCurrentImage:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (PUDisplayTileTransform *)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (double)livePhotoVideoPlaybackTileViewControllerExtraMinimumTouchDuration:(PULivePhotoVideoOverlayTileViewController *)arg1 locationProvider:(id <PUDisplayLocationProvider>)arg2;
- (void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(PULivePhotoVideoOverlayTileViewController *)arg1;

@end
