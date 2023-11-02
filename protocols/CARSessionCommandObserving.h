
@protocol CARSessionCommandObserving <NSObject>

@optional

- (void)session:(CARSession *)arg1 didSetViewArea:(CARScreenViewArea *)arg2 forScreenID:(NSString *)arg3 withDuration:(double)arg4 transitionControlType:(unsigned long long)arg5;
- (void)session:(CARSession *)arg1 didUpdateAppearanceStyle:(long long)arg2 forScreenUUID:(NSString *)arg3;
- (void)session:(CARSession *)arg1 didUpdateMapAppearanceStyle:(long long)arg2 forScreenUUID:(NSString *)arg3;
- (void)session:(CARSession *)arg1 didUpdateNightMode:(bool)arg2;
- (void)session:(CARSession *)arg1 handleSiriRequestEvent:(long long)arg2;
- (void)session:(CARSession *)arg1 handleSiriRequestEvent:(long long)arg2 withPayload:(NSDictionary *)arg3;
- (void)session:(CARSession *)arg1 openURL:(NSURL *)arg2;
- (void)session:(CARSession *)arg1 receivedUnhandledRemoteEvent:(NSString *)arg2 withPayload:(NSDictionary *)arg3;
- (void)session:(CARSession *)arg1 showUIForScreenInfo:(CARScreenInfo *)arg2 withURL:(NSURL *)arg3;
- (void)session:(CARSession *)arg1 stopUIForScreenInfo:(CARScreenInfo *)arg2;
- (void)sessionDidUpdateCarCapabilities:(CARSession *)arg1;

@end
