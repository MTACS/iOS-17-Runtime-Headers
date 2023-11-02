
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { 
        MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; 
        <MTLBuffer> *visibilityResultBuffer; 
        unsigned long long renderTargetWidth; 
        unsigned long long renderTargetHeight; 
        unsigned long long defaultColorSampleCount; 
        bool fineGrainedBackgroundVisibilityEnabled; 
        bool skipEmptyTilesOnClearEnabled; 
        bool ditherEnabled; 
        bool openGLModeEnabled; 
        unsigned long long renderTargetArrayLength; 
        unsigned long long tileWidth; 
        unsigned long long tileHeight; 
        union { 
            unsigned long long defaultSampleCount; 
            unsigned long long defaultRasterSampleCount; 
        } ; 
        unsigned long long imageBlockSampleLength; 
        unsigned long long threadgroupMemoryLength; 
        struct { 
            float x; 
            float y; 
        } customSamplePositions[4]; 
        unsigned long long numCustomSamplePositions; 
        <MTLRasterizationRateMap> *rasterizationRateMap; 
        MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; 
        bool pointCoordYFlipEnabled; 
        NSArray *binaryArchives; 
    }  _private;
}

+ (id)renderPassDescriptor;

- (const struct MTLRenderPassDescriptorPrivate { id x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; bool x7; bool x8; bool x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; union { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; unsigned long long x15; struct { float x_16_1_1; float x_16_1_2; } x16[4]; unsigned long long x17; id x18; id x19; bool x20; id x21; }*)_descriptorPrivate;
- (id)binaryArchives;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)defaultColorSampleCount;
- (unsigned long long)defaultRasterSampleCount;
- (id)depthAttachment;
- (id)description;
- (bool)fineGrainedBackgroundVisibilityEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)hash;
- (unsigned long long)imageblockSampleLength;
- (id)init;
- (bool)isDitherEnabled;
- (bool)isEqual:(id)arg1;
- (bool)openGLModeEnabled;
- (bool)pointCoordYFlipEnabled;
- (id)rasterizationRateMap;
- (unsigned long long)renderTargetArrayLength;
- (unsigned long long)renderTargetHeight;
- (unsigned long long)renderTargetWidth;
- (id)sampleBufferAttachments;
- (void)setBinaryArchives:(id)arg1;
- (void)setDefaultColorSampleCount:(unsigned long long)arg1;
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;
- (void)setDepthAttachment:(id)arg1;
- (void)setDitherEnabled:(bool)arg1;
- (void)setFineGrainedBackgroundVisibilityEnabled:(bool)arg1;
- (void)setImageblockSampleLength:(unsigned long long)arg1;
- (void)setOpenGLModeEnabled:(bool)arg1;
- (void)setPointCoordYFlipEnabled:(bool)arg1;
- (void)setRasterizationRateMap:(id)arg1;
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;
- (void)setRenderTargetHeight:(unsigned long long)arg1;
- (void)setRenderTargetWidth:(unsigned long long)arg1;
- (void)setSamplePositions:(const struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setSkipEmptyTilesOnClearEnabled:(bool)arg1;
- (void)setStencilAttachment:(id)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;
- (void)setTileHeight:(unsigned long long)arg1;
- (void)setTileWidth:(unsigned long long)arg1;
- (void)setVisibilityResultBuffer:(id)arg1;
- (bool)skipEmptyTilesOnClearEnabled;
- (id)stencilAttachment;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;
- (bool)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3;
- (id)visibilityResultBuffer;

@end
