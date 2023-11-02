
@interface AVTResourceLocator : NSObject {
    NSURL * _animojiResourcesURL;
    NSURL * _environmentResourcesURL;
    NSMutableDictionary * _imageCache;
    NSURL * _memojiAssetsURL;
    NSURL * _memojiResourcesURL;
    NSURL * _poseResourcesURL;
    NSURL * _resourcesURL;
    NSURL * _rootCacheURL;
    NSURL * _stickerResourcesURL;
    NSURL * _subdivDataCacheURL;
}

@property (readonly) NSURL *rootCacheURL;
@property (readonly) NSURL *subdivDataCacheURL;

+ (id)_resourcePathInDirectoryURL:(id)arg1 subDirectory:(id)arg2 name:(id)arg3 ofType:(id)arg4;
+ (id)sharedResourceLocator;

- (void).cxx_destruct;
- (void)deleteLegacyCache;
- (void)deleteObsoleteVersionsInCache:(id)arg1 currentVersion:(unsigned long long)arg2;
- (struct CGImage { }*)imageWithPath:(id)arg1;
- (id)init;
- (void)initCaches;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForEnvironmentResource:(id)arg1 ofType:(id)arg2;
- (id)pathForEnvironmentResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2;
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2;
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)rootCacheURL;
- (id)subdivDataCacheURL;
- (id)urlForFrameworkResourceAtPath:(id)arg1;
- (id)urlForMemojiAssetAtPath:(id)arg1;
- (id)urlForMemojiResourceAtPath:(id)arg1;
- (id)urlForStickerResourceAtPath:(id)arg1;

@end
