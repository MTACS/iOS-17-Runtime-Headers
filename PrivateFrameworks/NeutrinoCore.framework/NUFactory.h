
@interface NUFactory : NSObject {
    <NUStorageFactory> * _bufferFactory;
    NUPurgeableStoragePool * _bufferStoragePool;
    NUCacheNodeRegistry * _cacheNodeRegistry;
    NSString * _defaultNameSpace;
    NUPlatform * _platform;
    NURenderNodeCache * _renderNodeCache;
    NURenderPipelineRegistry * _renderPipelineRegistry;
    NURenderResultCache * _renderResultCache;
    CIFilter * _repairMLFilter;
    NUScheduler * _scheduler;
    NUSchemaRegistry * _schemaRegistry;
    <NUStorageFactory> * _surfaceFactory;
    NUPurgeableStoragePool * _surfaceStoragePool;
    VNSession * _visionSession;
}

@property (nonatomic, retain) <NUStorageFactory> *bufferFactory;
@property (nonatomic, retain) NUPurgeableStoragePool *bufferStoragePool;
@property (nonatomic, retain) NUCacheNodeRegistry *cacheNodeRegistry;
@property (nonatomic, copy) NSString *defaultNameSpace;
@property (nonatomic, retain) NUPlatform *platform;
@property (nonatomic, retain) NURenderNodeCache *renderNodeCache;
@property (nonatomic, retain) NURenderPipelineRegistry *renderPipelineRegistry;
@property (nonatomic, retain) NURenderResultCache *renderResultCache;
@property (nonatomic, retain) CIFilter *repairMLFilter;
@property (nonatomic, retain) NUScheduler *scheduler;
@property (nonatomic, retain) NUSchemaRegistry *schemaRegistry;
@property (nonatomic, retain) <NUStorageFactory> *surfaceFactory;
@property (nonatomic, retain) NUPurgeableStoragePool *surfaceStoragePool;
@property (nonatomic, retain) VNSession *visionSession;

+ (void)freeAllResources:(bool)arg1;
+ (bool)hasSharedFactory;
+ (void)reapAllStoragePools;
+ (void)reset;
+ (void)setSharedFactory:(id)arg1;
+ (id)sharedFactory;
+ (void)shutdownSharedFactory;

- (void).cxx_destruct;
- (id)bufferFactory;
- (id)bufferStoragePool;
- (id)cacheNodeRegistry;
- (id)defaultNameSpace;
- (id)platform;
- (id)renderNodeCache;
- (id)renderPipelineRegistry;
- (id)renderResultCache;
- (id)repairMLFilter;
- (id)scheduler;
- (id)schemaRegistry;
- (void)setBufferFactory:(id)arg1;
- (void)setBufferStoragePool:(id)arg1;
- (void)setCacheNodeRegistry:(id)arg1;
- (void)setDefaultNameSpace:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setRenderNodeCache:(id)arg1;
- (void)setRenderPipelineRegistry:(id)arg1;
- (void)setRenderResultCache:(id)arg1;
- (void)setRepairMLFilter:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSchemaRegistry:(id)arg1;
- (void)setSurfaceFactory:(id)arg1;
- (void)setSurfaceStoragePool:(id)arg1;
- (void)setVisionSession:(id)arg1;
- (void)start;
- (id)surfaceFactory;
- (id)surfaceStoragePool;
- (id)visionSession;

@end
