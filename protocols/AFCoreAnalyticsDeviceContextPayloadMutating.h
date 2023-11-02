
@protocol AFCoreAnalyticsDeviceContextPayloadMutating <NSObject>

@required

- (void)setAlarmFiring:(NSNumber *)arg1;
- (void)setContextIdentifier:(NSString *)arg1;
- (void)setHomeAnnouncementRecency:(NSNumber *)arg1;
- (void)setHomeAnnouncementState:(NSString *)arg1;
- (void)setNearbyDevicesRequestIdentifier:(NSString *)arg1;
- (void)setNearbyProductType:(NSString *)arg1;
- (void)setPlaybackRecency:(NSNumber *)arg1;
- (void)setPlaybackState:(NSString *)arg1;
- (void)setProximity:(NSString *)arg1;
- (void)setTargetedResult:(NSString *)arg1;
- (void)setTimerFiring:(NSNumber *)arg1;

@end
