
@interface _PASAsset2GuardedData : NSObject {
    unsigned long long  _bestAssetVersionObserved;
    MAAsset * _bestAvailableAsset;
    unsigned long long  _bestAvailableVersion;
    NSString * _defaultBundlePath;
    unsigned long long  _defaultBundleVersion;
    NSMutableDictionary * _overrides;
    bool  _purgeObsoleteInstalledAssets;
}

- (void).cxx_destruct;

@end
