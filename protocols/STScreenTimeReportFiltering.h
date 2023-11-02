
@protocol STScreenTimeReportFiltering <NSObject>

@required

- (void)filterForBundleIdentifier:(NSString *)arg1;
- (void)filterForCategoryIdentifier:(NSString *)arg1;
- (void)filterForDateMode:(long long)arg1 withinDateInterval:(NSDateInterval *)arg2;
- (void)filterForUserAltDSID:(NSString *)arg1 deviceIdentifier:(NSString *)arg2;
- (void)filterForWebDomain:(NSString *)arg1;

@end
