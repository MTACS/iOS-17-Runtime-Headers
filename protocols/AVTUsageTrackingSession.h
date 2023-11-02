
@protocol AVTUsageTrackingSession

@required

- (void)beginWithStore:(id <AVTAvatarStore>)arg1;
- (void)didChangeCurrentAvatarInCarousel:(id <AVTAvatarRecord>)arg1;
- (void)didChangeCurrentAvatarInStickers:(id <AVTAvatarRecord>)arg1;
- (void)didCreateAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didDeleteAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didDuplicateAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didEditAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didEnterEditor;
- (void)didLeaveEditor;
- (void)didOpenStickersAppFromRecents;
- (void)didPauseFaceTracking;
- (void)didRecordVideo;
- (void)didReplayVideo;
- (void)didResumeFaceTracking;
- (void)didSelectStickerFromStickersApp:(NSString *)arg1 withAvatar:(id <AVTAvatarRecord>)arg2;
- (void)didSendImageWithAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didSendStickerWithAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didSendVideoWithAvatar:(id <AVTAvatarRecord>)arg1 duration:(double)arg2;
- (void)didShowExpandedMode;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didStopFaceTrackingInCarousel;
- (void)didTapStickerFromRecents:(NSString *)arg1 withAvatarIdentifier:(NSString *)arg2;
- (void)end;

@end
