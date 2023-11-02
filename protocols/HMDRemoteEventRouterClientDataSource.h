
@protocol HMDRemoteEventRouterClientDataSource <NSObject>

@required

- (NSSet *)client:(HMDRemoteEventRouterClient *)arg1 forwardingTopicsForTopics:(NSSet *)arg2;
- (bool)client:(HMDRemoteEventRouterClient *)arg1 isIdsIdentifier:(NSUUID *)arg2 ofAccessory:(NSUUID *)arg3;
- (void)discoverPrimaryResidentForEventRouterClient:(HMDRemoteEventRouterClient *)arg1;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isNetworkAvailable;
- (id)primaryResidentChangeMonitorForRouterClient:(HMDRemoteEventRouterClient *)arg1;
- (HMFMessageDestination *)routerClientMessageDestination:(HMDRemoteEventRouterClient *)arg1 serverIdentifier:(out id*)arg2;
- (NSUUID *)routerClientPrimaryResidentDeviceIdentifier:(HMDRemoteEventRouterClient *)arg1;
- (bool)routerClientShouldRestrictMessagingToLocalOnly:(HMDRemoteEventRouterClient *)arg1;
- (bool)routerClientSupportsFragmentMessageForServerIdentifier:(NSUUID *)arg1;

@end
