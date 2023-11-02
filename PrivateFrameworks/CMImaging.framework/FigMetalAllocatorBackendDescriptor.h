
@interface FigMetalAllocatorBackendDescriptor : NSObject {
    <MTLBuffer> * _externalBuffer;
    NSString * _label;
    unsigned long long  _memSize;
    unsigned long long  _memoryPoolId;
    unsigned long long  _resourceOptions;
    bool  _wireMemory;
}

@property (nonatomic, retain) <MTLBuffer> *externalBuffer;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long memSize;
@property (nonatomic) unsigned long long memoryPoolId;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) bool wireMemory;

- (void).cxx_destruct;
- (id)description;
- (id)externalBuffer;
- (id)init;
- (id)label;
- (unsigned long long)memSize;
- (unsigned long long)memoryPoolId;
- (unsigned long long)resourceOptions;
- (void)setExternalBuffer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMemSize:(unsigned long long)arg1;
- (void)setMemoryPoolId:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setWireMemory:(bool)arg1;
- (bool)wireMemory;

@end
