
@interface FigMetalAllocatorBackend : NSObject {
    int  _allocatorType;
    bool  _isExternalMemory;
    NSString * _label;
    unsigned long long  _largestOccupiedOffset;
    unsigned long long  _memSize;
    CMIRangeAllocator * _rangeAllocator;
    unsigned long long  _resourceOptions;
    <FigMetalAllocatorImpl> * _storage;
    FigMetalUtils * _utils;
    unsigned long long  usedSize;
}

@property (nonatomic, readonly) int allocatorType;
@property (nonatomic, readonly) unsigned long long largestOccupiedOffset;
@property (nonatomic, readonly) unsigned long long maxContiguousFreeSize;
@property (nonatomic, readonly) unsigned long long memSize;
@property (nonatomic, readonly) unsigned long long resourceOptions;
@property (nonatomic, readonly) unsigned long long usedSize;

- (void).cxx_destruct;
- (int)allocatorType;
- (id)description;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForBufferDescriptor:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForDescriptor:(id)arg1;
- (bool)hasCreatedResource:(id)arg1;
- (id)initWithDevice:(id)arg1 allocatorType:(int)arg2;
- (unsigned long long)largestOccupiedOffset;
- (void)makeBufferAliasable:(id*)arg1;
- (void)makeTextureAliasable:(id*)arg1;
- (unsigned long long)maxContiguousFreeSize;
- (unsigned long long)memSize;
- (id)newBufferWithDescriptor:(id)arg1 sizeAlign:(struct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)newTextureWithDescriptor:(id)arg1 sizeAlign:(struct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)purgeResources;
- (void)reset;
- (unsigned long long)resourceOptions;
- (int)setupWithDescriptor:(id)arg1;
- (int)setupWithDescriptor:(id)arg1 allocatorBackend:(id)arg2;
- (unsigned long long)usedSize;
- (unsigned long long)usedSizeAll;

@end
