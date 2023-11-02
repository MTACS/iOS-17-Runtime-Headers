
@protocol NUMediaViewDelegate <NSObject>

@optional

- (void)mediaView:(NUMediaView *)arg1 didZoom:(double)arg2;
- (void)mediaViewDidEndLivePhotoPlayback:(NUMediaView *)arg1;
- (void)mediaViewDidEndZooming:(NUMediaView *)arg1;
- (void)mediaViewDidFinishPreparingVideo:(NUMediaView *)arg1;
- (void)mediaViewDidFinishRendering:(NUMediaView *)arg1;
- (void)mediaViewDidScroll:(NUMediaView *)arg1;
- (void)mediaViewDidStartPreparingVideo:(NUMediaView *)arg1;
- (void)mediaViewDidUpdateLivePhoto:(NUMediaView *)arg1;
- (void)mediaViewFailedToPlayToEnd:(NUMediaView *)arg1 error:(NSError *)arg2;
- (void)mediaViewIsReadyForVideoPlayback:(NUMediaView *)arg1;
- (void)mediaViewWillBeginLivePhotoPlayback:(NUMediaView *)arg1;
- (void)mediaViewWillBeginZooming:(NUMediaView *)arg1;

@end
