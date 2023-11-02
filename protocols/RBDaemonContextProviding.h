
@protocol RBDaemonContextProviding <NSObject>

@required

- (<RBAssertionManaging> *)assertionManager;
- (<RBAssertionOriginatorPidPersisting> *)assertionOriginatorPidStore;
- (<RBDomainAttributeManaging> *)domainAttributeManager;
- (<RBEntitlementManaging> *)entitlementManager;
- (<RBExtensionDataProviding> *)extensionDataProvider;
- (<RBHistoricalStatisticsMaintaining> *)historicalStatistics;
- (<RBJetsamPropertyManaging> *)jetsamPropertyManager;
- (RBProcess *)process;
- (<RBProcessManaging> *)processManager;
- (<RBProcessMonitoring> *)processMonitor;
- (<RBRequestManaging> *)requestManager;
- (<RBStateCaptureManaging> *)stateCaptureManager;

@end
