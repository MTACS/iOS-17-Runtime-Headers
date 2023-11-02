
@protocol FigMetalAllocatorImpl

@required

- (unsigned long long)alignment;
- (unsigned long long)bufferOffset:(id <MTLBuffer>)arg1;
- (NSString *)description;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForBufferDescriptor:(FigMetalBufferDescriptor *)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForDescriptor:(FigMetalTextureDescriptor *)arg1;
- (bool)hasCreatedBuffer:(id <MTLBuffer>)arg1;
- (bool)hasCreatedTexture:(id <MTLTexture>)arg1;
- (id)initWithMetalUtils:(FigMetalUtils *)arg1;
- (unsigned long long)memSize;
- (<MTLBuffer> *)newBufferWithDescriptor:(FigMetalBufferDescriptor *)arg1 offset:(unsigned long long)arg2;
- (<MTLTexture> *)newTextureWithDescriptor:(FigMetalTextureDescriptor *)arg1 offset:(unsigned long long)arg2;
- (void)purgeResources;
- (int)setupWithDescriptor:(FigMetalAllocatorBackendDescriptor *)arg1;
- (unsigned long long)textureOffset:(id <MTLTexture>)arg1;
- (FigMetalUtils *)utils;

@end
