
@protocol HMDAccessoryBrowserHapProtocol

@required

- (void)configureAccessory:(HMDHAPAccessory *)arg1 trackState:(bool)arg2 connectionPriority:(bool)arg3;
- (void)retrieveCurrentStateForIdentifier:(NSString *)arg1 stateNumber:(id*)arg2 isReachable:(bool*)arg3 linkQuality:(unsigned long long*)arg4 lastSeen:(id*)arg5;
- (void)updateBroadcastKeyForIdentifier:(NSString *)arg1 key:(NSData *)arg2 keyUpdatedStateNumber:(NSNumber *)arg3 keyUpdatedTime:(double)arg4;
- (void)updateStateForIdentifier:(NSString *)arg1 stateNumber:(NSNumber *)arg2;

@end
