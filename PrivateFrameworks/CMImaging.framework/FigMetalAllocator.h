
@interface FigMetalAllocator : NSObject {
    int  _allocationHint;
    int  _allocatorType;
    bool  _allowFallBack;
    bool  _autoUseSubAllocators;
    FigMetalAllocatorBackend * _backendAllocator;
    FigMetalBufferDescriptor * _bufDesc;
    int  _compressionLevel;
    NSMutableSet * _currentResources;
    bool  _forceDisableCompression;
    bool  _isExternalMemory;
    NSString * _label;
    unsigned long long  _memSize;
    unsigned long long  _resourceOptions;
    FigMetalTextureDescriptor * _texDesc;
    float  _texSizeRatioThreshold;
    FigMetalUtils * _utils;
    FigMetalAllocator * subAllocator;
    unsigned long long  usedSize;
}

@property (nonatomic, readonly) int allocationHint;
@property (nonatomic, readonly) int allocatorType;
@property (nonatomic, readonly) FigMetalAllocatorBackend *backendAllocator;
@property (nonatomic, readonly) int compressionLevel;
@property (nonatomic) bool forceDisableCompression;
@property (nonatomic, readonly) unsigned long long largestOccupiedOffset;
@property (nonatomic, readonly) unsigned long long maxContiguousFreeSize;
@property (nonatomic, readonly) unsigned long long memSize;
@property (nonatomic, readonly) unsigned long long resourceOptions;
@property (nonatomic, readonly) unsigned long long usedSize;

- (void).cxx_destruct;
- (int)addExternalMetalBuffer:(id)arg1 atSubAllocatorID:(unsigned int)arg2;
- (int)allocationHint;
- (int)allocatorType;
- (id)backendAllocator;
- (int)compressionLevel;
- (void)dealloc;
- (id)description;
- (bool)forceDisableCompression;
- (void)forgoOwnership:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForBufferDescriptor:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })getSizeAndAlignForDescriptor:(id)arg1;
- (id)initWithDevice:(id)arg1 allocatorType:(int)arg2;
- (unsigned long long)largestOccupiedOffset;
- (unsigned long long)largestOccupiedOffset:(unsigned int)arg1;
- (void)makeBufferAliasable:(id*)arg1;
- (void)makeTextureAliasable:(id*)arg1;
- (unsigned long long)maxContiguousFreeSize;
- (unsigned long long)memSize;
- (unsigned long long)memSize:(unsigned int)arg1;
- (id)newBufferDescriptor;
- (id)newBufferDescriptor:(unsigned int)arg1;
- (id)newBufferWithDescriptor:(id)arg1;
- (id)newBufferWithDescriptor:(id)arg1 subAllocatorID:(unsigned int)arg2;
- (id)newTextureDescriptor;
- (id)newTextureDescriptor:(unsigned int)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 subAllocatorID:(unsigned int)arg2;
- (void)purgeAllSubAllocatorsResources;
- (void)purgeResources;
- (void)purgeResources:(unsigned int)arg1;
- (void)reset;
- (void)reset:(unsigned int)arg1;
- (unsigned long long)resourceOptions;
- (void)setForceDisableCompression:(bool)arg1;
- (int)setupWithDescriptor:(id)arg1;
- (int)setupWithDescriptor:(id)arg1 allocatorBackend:(id)arg2;
- (unsigned long long)usedSize;
- (unsigned long long)usedSize:(unsigned int)arg1;
- (unsigned long long)usedSizeAll;

@end
