
@protocol SSUInstalledAppProvider <NSObject>

@required

- (NSArray *)lookupAllSSUEnabledApps;
- (SNLPSSUApplicationInfo *)lookupSSUEnabledAppByBundleId:(NSString *)arg1;

@end
