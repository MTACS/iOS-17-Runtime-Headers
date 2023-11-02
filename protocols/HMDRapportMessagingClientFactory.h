
@protocol HMDRapportMessagingClientFactory <NSObject>

@required

- (RPCompanionLinkClient *)newCompanionLinkClient;
- (RPCompanionLinkDevice *)newCompanionLinkDevice;
- (HMDRapportDeviceClientWrapper *)newRapportDeviceClientWrapperWithClient:(RPCompanionLinkClient *)arg1;

@end
