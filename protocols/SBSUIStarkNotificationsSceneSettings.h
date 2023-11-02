
@protocol SBSUIStarkNotificationsSceneSettings <NSObject>

@required

- (bool)isConnectedWirelessly;
- (bool)isGeoSupported;
- (BSServiceConnectionEndpoint *)openServiceEndpoint;
- (unsigned long long)suspensionReasons;

@end
