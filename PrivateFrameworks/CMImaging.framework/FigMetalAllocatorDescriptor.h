
@interface FigMetalAllocatorDescriptor : NSObject {
    int  _allocationHint;
    bool  _allowFallback;
    bool  _autoUseSubAllocators;
    int  _compressionLevel;
    <MTLBuffer> * _externalBuffer;
    NSString * _label;
    unsigned long long  _memSize;
    unsigned long long  _resourceOptions;
    bool  _wireMemory;
}

@property (nonatomic) int allocationHint;
@property (nonatomic) bool allowFallback;
@property (nonatomic) bool autoUseSubAllocators;
@property (nonatomic) int compressionLevel;
@property (nonatomic, retain) <MTLBuffer> *externalBuffer;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long memSize;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) bool wireMemory;

- (void).cxx_destruct;
- (int)allocationHint;
- (bool)allowFallback;
- (bool)autoUseSubAllocators;
- (int)compressionLevel;
- (id)externalBuffer;
- (id)init;
- (id)label;
- (unsigned long long)memSize;
- (unsigned long long)resourceOptions;
- (void)setAllocationHint:(int)arg1;
- (void)setAllowFallback:(bool)arg1;
- (void)setAutoUseSubAllocators:(bool)arg1;
- (void)setCompressionLevel:(int)arg1;
- (void)setExternalBuffer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMemSize:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setWireMemory:(bool)arg1;
- (bool)wireMemory;

@end
