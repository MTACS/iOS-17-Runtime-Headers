
@protocol MRAVDistantExternalDeviceClientProtocol <NSObject>

@required

- (void)discoveryOutputDevicesChanged:(NSArray *)arg1 forConfiguration:(MRAVRoutingDiscoverySessionConfiguration *)arg2;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(NSError *)arg2;
- (void)hostedExternalDeviceDeviceInfoDidChange:(MRDeviceInfo *)arg1;
- (void)hostedExternalDeviceDidAddOutputDevice:(MRAVOutputDevice *)arg1;
- (void)hostedExternalDeviceDidChangeOutputDevice:(MRAVOutputDevice *)arg1;
- (void)hostedExternalDeviceDidReceiveCustomData:(NSData *)arg1 withName:(NSString *)arg2;
- (void)hostedExternalDeviceDidRemoveOutputDevice:(MRAVOutputDevice *)arg1;
- (void)hostedExternalDeviceEndpointDidChange:(MRAVEndpoint *)arg1;
- (void)hostedExternalDeviceIsMutedDidChange:(bool)arg1 forOutputDevice:(MRAVOutputDevice *)arg2;
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forOutputDevice:(MRAVOutputDevice *)arg2;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forOutputDevice:(MRAVOutputDevice *)arg2;

@end
