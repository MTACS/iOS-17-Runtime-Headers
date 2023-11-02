
@interface CLKUIResourceManager : NSObject {
    NSMutableDictionary * _atlasesByUuid;
    unsigned long long  _explicitMemoryLimit;
    unsigned long long  _memoryLimit;
    unsigned long long  _memoryUsed;
    NSMutableDictionary * _providersByKey;
    NSMutableDictionary * _recentProvidersForUuid;
    NSMutableArray * _streamedAtlases;
    NSMutableArray * _textureLoaderQueues;
}

@property (nonatomic) unsigned long long explicitMemoryLimit;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_computeMemoryAvailable;
- (id)_fetchOldestAtlas;
- (unsigned long long)_memoryLimit;
- (id)_newAtlasForUuid:(id)arg1 nullTexture:(id)arg2 streaming:(bool)arg3;
- (void)_purgeAllUnconditionally;
- (void)_purgeAtlases:(id)arg1;
- (void)_updateTextureStreamingForAtlas:(id)arg1;
- (id)borrowTextureLoadingQueue;
- (void)dealloc;
- (id)delegateForUuid:(id)arg1;
- (bool)ensureMemoryAvailable:(unsigned long long)arg1;
- (unsigned long long)explicitMemoryLimit;
- (id)init;
- (bool)memoryIsAvailable:(unsigned long long)arg1;
- (void)notifyAtlas:(id)arg1 willChangeToMemoryCost:(unsigned long long)arg2;
- (id)nullAtlas2D;
- (id)nullAtlasCube;
- (void)purge:(id)arg1;
- (void)purgeAllUnused;
- (void)returnTextureLoadingQueue:(id)arg1;
- (void)setExplicitMemoryLimit:(unsigned long long)arg1;
- (id)textureForUuid:(void *)arg1 delegate:(void *)arg2 rect:(void *)arg3 nullTexture:(void *)arg4 streaming:(void *)arg5; // needs 5 arg types, found 4: id, id, id, bool
- (void)updateTextureStreaming;

@end
