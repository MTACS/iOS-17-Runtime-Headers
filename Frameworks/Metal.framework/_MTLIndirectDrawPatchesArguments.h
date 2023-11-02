
@interface _MTLIndirectDrawPatchesArguments : NSObject {
    unsigned long long  _baseInstance;
    unsigned long long  _instanceCount;
    unsigned long long  _numberOfPatchControlPoints;
    unsigned long long  _patchCount;
    unsigned long long  _patchIndexBufferGPUVirtualAddress;
    unsigned long long  _patchIndexBufferOffset;
    void * _patchIndexBufferVirtualAddress;
    unsigned long long  _patchStart;
}

@property (nonatomic) unsigned long long baseInstance;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long numberOfPatchControlPoints;
@property (nonatomic) unsigned long long patchCount;
@property (nonatomic) unsigned long long patchIndexBufferGPUVirtualAddress;
@property (nonatomic) unsigned long long patchIndexBufferOffset;
@property (nonatomic) void*patchIndexBufferVirtualAddress;
@property (nonatomic) unsigned long long patchStart;

- (unsigned long long)baseInstance;
- (unsigned long long)instanceCount;
- (unsigned long long)numberOfPatchControlPoints;
- (unsigned long long)patchCount;
- (unsigned long long)patchIndexBufferGPUVirtualAddress;
- (unsigned long long)patchIndexBufferOffset;
- (void*)patchIndexBufferVirtualAddress;
- (unsigned long long)patchStart;
- (void)setBaseInstance:(unsigned long long)arg1;
- (void)setInstanceCount:(unsigned long long)arg1;
- (void)setNumberOfPatchControlPoints:(unsigned long long)arg1;
- (void)setPatchCount:(unsigned long long)arg1;
- (void)setPatchIndexBufferGPUVirtualAddress:(unsigned long long)arg1;
- (void)setPatchIndexBufferOffset:(unsigned long long)arg1;
- (void)setPatchIndexBufferVirtualAddress:(void*)arg1;
- (void)setPatchStart:(unsigned long long)arg1;

@end
