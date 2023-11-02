
@protocol HMDRemoteEventRouterServerDataSource <NSObject>

@required

- (bool)canTopicBeForwardedToPrimaryFromResident:(NSString *)arg1;
- (NSArray *)expandedTopicsWithTopics:(NSArray *)arg1;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isDeviceIdentifierPrimaryResident:(NSUUID *)arg1;
- (HMDDevice *)messageTargetForDeviceIdentifier:(NSUUID *)arg1;
- (id)primaryResidentChangeMonitorForRouterServer:(HMDRemoteEventRouterServer *)arg1;
- (<HMDRemoteEventAccessControlProvider> *)remoteEventAccessControlProvider;
- (<HMDRemoteEventRouterUserAccessControlProvider> *)routerServerUserAccessControlProviderForIdentifier:(NSUUID *)arg1;
- (NSUUID *)routerServerUserAccessControlProviderIdentifierForMessage:(HMFMessage *)arg1;
- (bool)shouldAllowTopic:(NSString *)arg1 forDeviceWithMessageIdentifier:(NSUUID *)arg2;

@end
