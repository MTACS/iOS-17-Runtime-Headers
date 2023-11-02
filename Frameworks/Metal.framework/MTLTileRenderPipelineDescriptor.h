
@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying> {
    unsigned long long  _maxCallStackDepth;
    NSArray * _preloadedLibraries;
    bool  _supportAddingBinaryFunctions;
}

@property (nonatomic, copy) NSArray *binaryArchives;
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) unsigned long long maxCallStackDepth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, copy) NSArray *preloadedLibraries;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (nonatomic) bool supportAddingBinaryFunctions;
@property (nonatomic) bool threadgroupSizeMatchesTileSize;
@property (readonly) MTLPipelineBufferDescriptorArray *tileBuffers;
@property (nonatomic, retain) <MTLFunction> *tileFunction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)maxCallStackDepth;
- (id)preloadedLibraries;
- (void)reset;
- (void)setMaxCallStackDepth:(unsigned long long)arg1;
- (void)setPreloadedLibraries:(id)arg1;
- (void)setSupportAddingBinaryFunctions:(bool)arg1;
- (bool)supportAddingBinaryFunctions;

@end
