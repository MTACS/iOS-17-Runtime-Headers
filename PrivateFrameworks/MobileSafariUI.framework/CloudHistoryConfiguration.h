
@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {
    NSArray * _assetsSortedByVersionNumber;
    bool  _fetchedAssetData;
    NSDictionary * _remoteConfigurationDictionary;
}

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)_cloudConfigurationAssetsSortedByVersionNumber;
- (void)_reloadConfigurationDataIfNecessary;
- (id)init;
- (id)platformBuiltInConfiguration;
- (id)remoteConfiguration;
- (bool)shouldUseLongLivedOperationsToSaveRecords;

@end
