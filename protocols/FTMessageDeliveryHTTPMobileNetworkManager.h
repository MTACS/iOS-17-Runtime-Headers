
@protocol FTMessageDeliveryHTTPMobileNetworkManager <NSObject>

@required

- (void)addWiFiAutoAssociationClientToken:(NSString *)arg1;
- (bool)isAirplaneModeEnabled;
- (bool)isWiFiUsable;
- (void)removeWiFiAutoAssociationClientToken:(NSString *)arg1;

@end
