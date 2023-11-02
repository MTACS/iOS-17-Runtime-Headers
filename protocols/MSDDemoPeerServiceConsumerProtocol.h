
@protocol MSDDemoPeerServiceConsumerProtocol <NSObject>

@required

- (void)providerDidDiscoverNewPeer:(MSDKPeerDemoDevice *)arg1;
- (void)providerDidLoseExistingPeerOfID:(NSString *)arg1;
- (void)providerDidUpdateDeviceInfoOnPeerOfID:(NSString *)arg1 withNewProperties:(NSDictionary *)arg2;

@end
