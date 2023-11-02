
@protocol SBSProximityHandoffUIImplementer <NSObject>

@required

- (void)handoffCancelWithHandoffType:(unsigned long long)arg1;
- (void)handoffCompleteWithHandoffType:(unsigned long long)arg1;
- (void)handoffStartWithArtworkColors:(SBSColorGroup *)arg1 handoffType:(unsigned long long)arg2;
- (void)handoffStartWithHandoffType:(unsigned long long)arg1;
- (void)handoffUpdateIntensity:(float)arg1 handoffType:(unsigned long long)arg2;

@optional

- (void)handoffSetDeviceAsStereoLeader:(bool)arg1 withOptions:(NSDictionary *)arg2;

@end
