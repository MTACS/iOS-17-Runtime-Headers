
@interface MTLComputePipelineDescriptor : NSObject <NSCopying> {
    NSArray * _insertLibraries;
}

@property (nonatomic, copy) NSArray *binaryArchives;
@property (readonly) MTLPipelineBufferDescriptorArray *buffers;
@property (nonatomic, retain) <MTLFunction> *computeFunction;
@property (nonatomic) bool forceResourceIndex;
@property (nonatomic, copy) NSArray *insertLibraries;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) unsigned long long maxCallStackDepth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, copy) NSArray *preloadedLibraries;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic, copy) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (nonatomic) bool supportAddingBinaryFunctions;
@property (nonatomic) bool supportIndirectCommandBuffers;
@property (nonatomic) bool threadGroupSizeIsMultipleOfThreadExecutionWidth;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)insertLibraries;
- (void)reset;
- (void)setInsertLibraries:(id)arg1;

@end
