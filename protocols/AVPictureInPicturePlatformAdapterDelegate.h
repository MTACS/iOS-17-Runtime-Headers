
@protocol AVPictureInPicturePlatformAdapterDelegate <NSObject>

@required

- (void)pictureInPicturePlatformAdapter:(AVPictureInPicturePlatformAdapter *)arg1 failedToStartError:(NSError *)arg2;
- (void)pictureInPicturePlatformAdapter:(AVPictureInPicturePlatformAdapter *)arg1 handlePlaybackCommand:(long long)arg2;
- (void)pictureInPicturePlatformAdapter:(void *)arg1 prepareToStopForRestoringUserInterface:(void *)arg2; // needs 2 arg types, found 7: AVPictureInPicturePlatformAdapter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pictureInPicturePlatformAdapter:(AVPictureInPicturePlatformAdapter *)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3;
- (void)pictureInPicturePlatformAdapter:(AVPictureInPicturePlatformAdapter *)arg1 stopPictureInPictureAndRestoreUserInterface:(bool)arg2;
- (void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
- (void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;
- (void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(AVPictureInPicturePlatformAdapter *)arg1;

@end
