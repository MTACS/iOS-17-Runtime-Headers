
@interface PEPServiceConfiguration : NSObject {
    NSString * _cacheFilePath;
    double  _cachedFileLastModifyDate;
    bool  _shouldDownloadNetworkConfigFile;
}

+ (id)sharedInstance;

- (void)_postNotification;
- (void)_updateDefaults:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)registerNetworkDefaultsForAppID:(id)arg1;
- (bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(bool)arg2;

@end
