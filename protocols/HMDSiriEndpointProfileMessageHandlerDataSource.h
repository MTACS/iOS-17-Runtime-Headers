
@protocol HMDSiriEndpointProfileMessageHandlerDataSource <NSObject>

@required

- (NSArray *)hubAccessoriesWithHomeUUID:(NSUUID *)arg1 forSiriEndpointProfileMessageHandler:(HMDSiriEndpointProfileMessageHandler *)arg2;
- (HMDSiriEndpointOnboardingManager *)siriEndpointOnboardingManagerForSiriEndpointProfileMessageHandler:(HMDSiriEndpointProfileMessageHandler *)arg1;
- (NSUUID *)userUUIDForMessage:(HMFMessage *)arg1 homeUUID:(NSUUID *)arg2;

@end
