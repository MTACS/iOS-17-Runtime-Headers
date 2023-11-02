
@protocol DBNavigationAppInfoProviding <NSObject>

@required

- (bool)bundleIdentifierIsCertificationApp:(NSString *)arg1;
- (bool)bundleIdentifierSupportsDashboard:(NSString *)arg1;
- (bool)bundleIdentifierSupportsInstrumentCluster:(NSString *)arg1;

@end
