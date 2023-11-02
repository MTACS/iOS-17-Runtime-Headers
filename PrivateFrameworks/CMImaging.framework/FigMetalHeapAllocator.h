
@interface FigMetalHeapAllocator : NSObject <FigMetalAllocatorImpl> {
    unsigned long long  _alignment;
    <MTLHeap> * _heap;
    unsigned long long  _memSize;
    FigMetalUtils * _utils;
}

@property (nonatomic, readonly) unsigned long long alignment;
@property (nonatomic, readonly) unsigned long long memSize;
@property (nonatomic, readonly) FigMetalUtils *utils;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (unsigned long long)bufferOffset:(id)arg1;
- (id)description;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForBufferDescriptor:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForDescriptor:(id)arg1;
- (bool)hasCreatedBuffer:(id)arg1;
- (bool)hasCreatedTexture:(id)arg1;
- (id)initWithMetalUtils:(id)arg1;
- (unsigned long long)memSize;
- (id)newBufferWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (void)purgeResources;
- (int)setupWithDescriptor:(id)arg1;
- (unsigned long long)textureOffset:(id)arg1;
- (id)utils;

@end
