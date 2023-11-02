
@protocol CNUIUserActionDiscoveringEnvironment <NSObject>

@required

- (<CNLSApplicationWorkspace> *)applicationWorkspace;
- (<CNTUCallProviderManager> *)callProviderManager;
- (<CNCapabilities> *)capabilities;
- (CNContactStore *)contactStore;
- (<CNUIUserActionDiscoveringEnvironment> *)copyWithContactStore:(CNContactStore *)arg1;
- (<CNUIDefaultUserActionFetcher> *)defaultUserActionFetcher;
- (<CNSchedulerProvider> *)highLatencySchedulerProvider;
- (CNUIIDSContactPropertyResolver *)idsContactPropertyResolver;
- (<CNMCProfileConnection> *)profileConnection;
- (<CNSchedulerProvider> *)schedulerProvider;
- (<CNUIUserActionTargetDiscovering> *)targetDiscoveringHelper;
- (<CNUIRTTUtilities> *)ttyUtilities;

@end
