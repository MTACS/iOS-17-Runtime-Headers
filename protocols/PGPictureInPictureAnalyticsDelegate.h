
@protocol PGPictureInPictureAnalyticsDelegate <NSObject>

@required

- (void)pictureInPictureAnalyticsSourceWithUUID:(NSUUID *)arg1 didBecomePossible:(bool)arg2;
- (void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(NSUUID *)arg1 analyticsSourceUUID:(NSUUID *)arg2 automatically:(bool)arg3;
- (void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(NSUUID *)arg1 stashed:(bool)arg2;
- (void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 contentType:(long long)arg3;
- (void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 contentType:(long long)arg3;
- (void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(NSUUID *)arg1 analyticsSourceUUID:(NSUUID *)arg2 appStoppedSession:(bool)arg3 restoredFullScreen:(bool)arg4;
- (void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(NSUUID *)arg1;
- (void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(NSUUID *)arg1;

@end
