
@interface VUIAssetGroup : NSObject {
    NSMutableDictionary * _assetKeysByTag;
    NSString * _cachePath;
    NSMutableDictionary * _cacheRecords;
    unsigned long long  _currentCacheSize;
    long long  _groupType;
    NSMutableDictionary * _manifest;
    bool  _manifestDirty;
    unsigned long long  _maxCacheSize;
    unsigned long long  _pruneCount;
}

@property (nonatomic, retain) NSMutableDictionary *assetKeysByTag;
@property (nonatomic, retain) NSString *cachePath;
@property (nonatomic, retain) NSMutableDictionary *cacheRecords;
@property (nonatomic) unsigned long long currentCacheSize;
@property (nonatomic) long long groupType;
@property (nonatomic, retain) NSMutableDictionary *manifest;
@property (getter=isManifestDirty, nonatomic) bool manifestDirty;
@property (nonatomic) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long pruneCount;

+ (id)_humanReadableStringForGroupType:(long long)arg1;

- (void).cxx_destruct;
- (id)_manifestFilePath;
- (void)_removeAssetInfoForKey:(id)arg1;
- (void)_removeAssetInfoForKey:(id)arg1 removeFile:(bool)arg2;
- (void)_saveManifest;
- (void)_updateManifestWithChange:(id /* block */)arg1;
- (id)assetInfoForKey:(id)arg1 queue:(id)arg2;
- (id)assetKeysByTag;
- (id)cachePath;
- (id)cacheRecords;
- (unsigned long long)currentCacheSize;
- (id)description;
- (long long)groupType;
- (id)infoForAllAssetsWithQueue:(id)arg1;
- (id)infoForAllAssetsWithTags:(id)arg1 queue:(id)arg2;
- (id)initWithGroupType:(long long)arg1 baseCachePath:(id)arg2 folderName:(id)arg3 maxCacheSize:(unsigned long long)arg4 purgeOnLoad:(bool)arg5;
- (bool)isManifestDirty;
- (id)manifest;
- (unsigned long long)maxCacheSize;
- (unsigned long long)pruneCount;
- (void)removeAllAssetsWithQueue:(id)arg1;
- (void)removeAssetInfoForKey:(id)arg1 queue:(id)arg2;
- (void)setAssetInfo:(id)arg1 forKey:(id)arg2 queue:(id)arg3;
- (void)setAssetKeysByTag:(id)arg1;
- (void)setCachePath:(id)arg1;
- (void)setCacheRecords:(id)arg1;
- (void)setCurrentCacheSize:(unsigned long long)arg1;
- (void)setGroupType:(long long)arg1;
- (void)setManifest:(id)arg1;
- (void)setManifestDirty:(bool)arg1;
- (void)setMaxCacheSize:(unsigned long long)arg1;
- (void)setPruneCount:(unsigned long long)arg1;
- (void)updateAssetsFromFiles;

@end
