
@protocol SBAVSystemControllerCacheObserver <NSObject>

@optional

- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveAudioRoute:(NSString *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveAudioRoutingWithRoute:(NSString *)arg2 routeAttributes:(NSDictionary *)arg3 activeOutputDevices:(NSArray *)arg4;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveCategoryName:(NSString *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveOutputDevices:(NSArray *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateAirplayDisplayActive:(bool)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateAudioSessionPlaying:(bool)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdatePickableRoutes:(NSArray *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateRingerMuted:(bool)arg2;
- (void)cacheDidRebuildAfterServerDeath:(SBAVSystemControllerCache *)arg1;

@end
