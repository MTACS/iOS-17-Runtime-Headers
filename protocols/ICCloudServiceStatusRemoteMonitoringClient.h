
@protocol ICCloudServiceStatusRemoteMonitoringClient <NSObject>

@required

- (void)activeAccountDidChange;
- (void)capabilitiesDidChange:(unsigned long long)arg1;
- (void)storefrontCountryCodeDidChange:(NSString *)arg1;
- (void)storefrontIdentifierDidChange:(NSString *)arg1;

@end
