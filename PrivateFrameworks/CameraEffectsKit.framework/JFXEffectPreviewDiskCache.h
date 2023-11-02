
@interface JFXEffectPreviewDiskCache : NSObject {
    NSString * _cacheDirectoryPath;
    NSString * _directoryName;
    NSOperationQueue * _diskAccessQueue;
}

@property (nonatomic, readonly) NSString *cacheDirectoryPath;
@property (nonatomic, readonly) NSString *directoryName;
@property (nonatomic, readonly) NSOperationQueue *diskAccessQueue;

+ (id)cachedPathForEffect:(id)arg1 version:(id)arg2 directoryPath:(id)arg3;
+ (id)createCacheAtDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)cacheDirectoryPath;
- (id)cachedURLForEffect:(id)arg1 version:(id)arg2;
- (void)dealloc;
- (id)directoryName;
- (id)diskAccessQueue;
- (id)initWithDirectory:(id)arg1;
- (void)previewForEffectID:(id)arg1 version:(id)arg2 completion:(id /* block */)arg3;
- (void)removePreviewForEffectID:(id)arg1 excludingVersion:(id)arg2 completion:(id /* block */)arg3;
- (void)savePreviewForEffectID:(id)arg1 image:(id)arg2 version:(id)arg3 completion:(id /* block */)arg4;

@end
