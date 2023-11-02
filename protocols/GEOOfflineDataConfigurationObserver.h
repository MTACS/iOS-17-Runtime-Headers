
@protocol GEOOfflineDataConfigurationObserver <NSObject>

@optional

- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeActiveVersions:(NSDictionary *)arg2;
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeLatestAvailableVersions:(NSDictionary *)arg2;
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeRegulatoryRegionID:(unsigned int)arg2;
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeUpdateAvailability:(bool)arg2;

@end
