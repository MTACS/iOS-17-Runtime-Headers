
@interface HUCameraPlayerConfiguration : NSObject {
    HMCameraProfile * _cameraProfile;
    NSUUID * _clipUUID;
    HMHome * _home;
    NSUUID * _notificationUUID;
    NSDate * _startingPlaybackDate;
}

@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, readonly) NSUUID *clipUUID;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSUUID *notificationUUID;
@property (nonatomic, retain) NSDate *startingPlaybackDate;

- (void).cxx_destruct;
- (id)cameraProfile;
- (id)clipUUID;
- (id)description;
- (id)home;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2 notificationUUID:(id)arg3 clipUUID:(id)arg4;
- (bool)isConfiguredForLiveStream;
- (id)notificationUUID;
- (void)setStartingPlaybackDate:(id)arg1;
- (id)startingPlaybackDate;

@end
