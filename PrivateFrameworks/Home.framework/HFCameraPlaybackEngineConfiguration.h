
@interface HFCameraPlaybackEngineConfiguration : NSObject {
    HMCameraProfile * _cameraProfile;
    <HFCameraClipScrubbing> * _clipScrubber;
    HMHome * _home;
    NSUUID * _notificationClipUUID;
    NSUUID * _notificationUUID;
    HFCameraPlaybackPosition * _playbackPosition;
}

@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic) <HFCameraClipScrubbing> *clipScrubber;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSUUID *notificationClipUUID;
@property (nonatomic, retain) NSUUID *notificationUUID;
@property (nonatomic, retain) HFCameraPlaybackPosition *playbackPosition;

- (void).cxx_destruct;
- (void)assertConfigurationIsValid;
- (id)cameraProfile;
- (id)clipScrubber;
- (id)home;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;
- (id)notificationClipUUID;
- (id)notificationUUID;
- (id)playbackPosition;
- (void)setClipScrubber:(id)arg1;
- (void)setNotificationClipUUID:(id)arg1;
- (void)setNotificationUUID:(id)arg1;
- (void)setPlaybackPosition:(id)arg1;

@end
