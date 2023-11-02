
@interface HMDRapportMessagingClientFactory : NSObject <HMDRapportMessagingClientFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)newCompanionLinkClient;
- (id)newCompanionLinkDevice;
- (id)newRapportDeviceClientWrapperWithClient:(id)arg1;

@end
