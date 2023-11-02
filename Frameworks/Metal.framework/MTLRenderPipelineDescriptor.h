
@interface MTLRenderPipelineDescriptor : NSObject <NSCopying> {
    NSArray * _fragmentPreloadedLibraries;
    unsigned long long  _maxFragmentCallStackDepth;
    unsigned long long  _maxVertexCallStackDepth;
    bool  _supportAddingFragmentBinaryFunctions;
    bool  _supportAddingVertexBinaryFunctions;
    NSArray * _vertexPreloadedLibraries;
}

@property (getter=isAlphaToCoverageEnabled, nonatomic) bool alphaToCoverageEnabled;
@property (getter=isAlphaToOneEnabled, nonatomic) bool alphaToOneEnabled;
@property (nonatomic, copy) NSArray *binaryArchives;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned long long depthAttachmentPixelFormat;
@property (readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers;
@property (nonatomic, retain) <MTLFunction> *fragmentFunction;
@property (nonatomic, copy) MTLLinkedFunctions *fragmentLinkedFunctions;
@property (nonatomic, copy) NSArray *fragmentPreloadedLibraries;
@property (nonatomic) unsigned long long inputPrimitiveTopology;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long maxFragmentCallStackDepth;
@property (nonatomic) unsigned long long maxTessellationFactor;
@property (nonatomic) unsigned long long maxVertexAmplificationCount;
@property (nonatomic) unsigned long long maxVertexCallStackDepth;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (getter=isRasterizationEnabled, nonatomic) bool rasterizationEnabled;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long stencilAttachmentPixelFormat;
@property (nonatomic) bool supportAddingFragmentBinaryFunctions;
@property (nonatomic) bool supportAddingVertexBinaryFunctions;
@property (nonatomic) bool supportIndirectCommandBuffers;
@property (nonatomic) unsigned long long tessellationControlPointIndexType;
@property (nonatomic) unsigned long long tessellationFactorFormat;
@property (getter=isTessellationFactorScaleEnabled, nonatomic) bool tessellationFactorScaleEnabled;
@property (nonatomic) unsigned long long tessellationFactorStepFunction;
@property (nonatomic) unsigned long long tessellationOutputWindingOrder;
@property (nonatomic) unsigned long long tessellationPartitionMode;
@property (readonly) MTLPipelineBufferDescriptorArray *vertexBuffers;
@property (nonatomic, copy) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic, retain) <MTLFunction> *vertexFunction;
@property (nonatomic, copy) MTLLinkedFunctions *vertexLinkedFunctions;
@property (nonatomic, copy) NSArray *vertexPreloadedLibraries;

// Image: /System/Library/Frameworks/Metal.framework/Metal

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fragmentPreloadedLibraries;
- (unsigned long long)maxFragmentCallStackDepth;
- (unsigned long long)maxVertexCallStackDepth;
- (void)reset;
- (void)setFragmentPreloadedLibraries:(id)arg1;
- (void)setMaxFragmentCallStackDepth:(unsigned long long)arg1;
- (void)setMaxVertexCallStackDepth:(unsigned long long)arg1;
- (void)setSupportAddingFragmentBinaryFunctions:(bool)arg1;
- (void)setSupportAddingVertexBinaryFunctions:(bool)arg1;
- (void)setVertexPreloadedLibraries:(id)arg1;
- (bool)supportAddingFragmentBinaryFunctions;
- (bool)supportAddingVertexBinaryFunctions;
- (id)vertexPreloadedLibraries;

// Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI

- (void)configureForAdditiveBlending;
- (void)configureForAlphaReductionBlending;
- (void)configureForSourceOverBlending;

@end
