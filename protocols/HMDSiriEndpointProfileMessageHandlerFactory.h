
@protocol HMDSiriEndpointProfileMessageHandlerFactory <NSObject>

@required

- (HMDSiriEndpointProfileMessageHandler *)createSiriEndpointProfileMessageHandlerWithHomeUUID:(NSUUID *)arg1;

@end
