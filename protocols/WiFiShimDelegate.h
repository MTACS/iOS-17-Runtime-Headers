
@protocol WiFiShimDelegate <NSObject>

@optional

- (void)wifiShim_AWDLLinkUp:(bool)arg1;
- (void)wifiShim_BSSIDChangedForInterface:(NSString *)arg1;
- (void)wifiShim_CurrentAssociationChanged:(bool)arg1 associationInfo:(NSDictionary *)arg2;
- (void)wifiShim_HintForFallback:(bool)arg1 reasons:(NSSet *)arg2;
- (void)wifiShim_InfraAdminDisable:(NSString *)arg1 bssid:(NSString *)arg2;
- (void)wifiShim_L2NewMetrics:(NSDictionary *)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_L2TriggerDisconnectEdge:(bool)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_LQMAsystoleDetected:(double)arg1;
- (void)wifiShim_PreferredNetworksChanged:(NSDictionary *)arg1;
- (void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_WiFiManagerHasRestarted;

@end
