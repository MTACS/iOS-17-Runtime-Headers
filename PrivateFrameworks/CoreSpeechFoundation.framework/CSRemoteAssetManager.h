
@interface CSRemoteAssetManager : NSObject {
    NSString * _assetHash;
    NSString * _configVersion;
    NSString * _currentLanguageCode;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _resourcePath;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_loadFromJsonFile:(id)arg1;
- (id)_loadJsonDataFromFile:(id)arg1;
- (bool)_loadPreinstalledAssetMetaIfNeeded;
- (id)_remoteAssetMetaPath;
- (void)_setAssetsInfoFromMetaData:(id)arg1;
- (bool)_writeToJsonFile:(id)arg1;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)assetConfigVersionForAssetType:(unsigned long long)arg1;
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;
- (id)assetHashForAssetType:(unsigned long long)arg1;
- (id)init;
- (id)languageCode;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)resourcePathForAssetType:(unsigned long long)arg1;
- (void)setLanguageCode:(id)arg1 resourcePath:(id)arg2 configVersion:(id)arg3 assetHash:(id)arg4 assetType:(unsigned long long)arg5;

@end
