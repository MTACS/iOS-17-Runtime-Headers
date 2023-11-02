
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { 
        MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; 
        union { 
            unsigned long long sampleCount; 
            unsigned long long rasterSampleCount; 
        } ; 
        NSString *label; 
        <MTLFunction> *tileFunction; 
        bool threadgroupSizeMatchesTileSize; 
        unsigned long long paddingToRemove; 
        unsigned long long colorSampleCount; 
        MTLPipelineBufferDescriptorArrayInternal *tileBuffers; 
        unsigned short maxTotalThreadsPerThreadgroup; 
        long long textureWriteRoundingMode; 
        NSDictionary *pluginData; 
        NSArray *binaryArchives; 
        MTLLinkedFunctions *linkedFunctions; 
        NSArray *preloadedLibraries; 
        unsigned long long maxStackCallDepth; 
        bool supportAddingBinaryFunctions; 
        MTLProfileControl *profileControl; 
        unsigned long long maxAccelerationStructureTraversalDepth; 
        NSDictionary *gpuCompilerSPIOptions; 
    }  _private;
}

- (const struct MTLTileRenderPipelineDescriptorPrivate { id x1; union { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; id x3; id x4; bool x5; unsigned long long x6; unsigned long long x7; id x8; unsigned short x9; long long x10; id x11; id x12; id x13; id x14; unsigned long long x15; bool x16; id x17; unsigned long long x18; id x19; }*)_descriptorPrivate;
- (id)binaryArchives;
- (id)colorAttachments;
- (unsigned long long)colorSampleCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)gpuCompilerSPIOptions;
- (unsigned long long)hash;
- (id)init;
- (id)insertLibraries;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)linkedFunctions;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (unsigned long long)maxCallStackDepth;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (id)newPipelineScript;
- (id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)pluginData;
- (id)preloadedLibraries;
- (id)profileControl;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)setBinaryArchives:(id)arg1;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (void)setGpuCompilerSPIOptions:(id)arg1;
- (void)setInsertLibraries:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLinkedFunctions:(id)arg1;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)arg1;
- (void)setMaxCallStackDepth:(unsigned long long)arg1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)setPluginData:(id)arg1;
- (void)setPreloadedLibraries:(id)arg1;
- (void)setProfileControl:(id)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSupportAddingBinaryFunctions:(bool)arg1;
- (void)setTextureWriteRoundingMode:(long long)arg1;
- (void)setThreadgroupSizeMatchesTileSize:(bool)arg1;
- (void)setTileFunction:(id)arg1;
- (bool)supportAddingBinaryFunctions;
- (long long)textureWriteRoundingMode;
- (bool)threadgroupSizeMatchesTileSize;
- (id)tileBuffers;
- (id)tileFunction;
- (void)validateWithDevice:(id)arg1;
- (bool)validateWithDevice:(id)arg1 error:(id*)arg2;

@end
