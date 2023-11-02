
@interface MTLGPUDebugBufferErrorLog : MTLGPUDebugGPULog {
    int  _addressSpace;
    MTLArgument * _argument;
    <MTLBuffer> * _buffer;
    unsigned long long  _offset;
    int  _operation;
    int  _specifiedUsage;
}

@property (nonatomic) int addressSpace;
@property (nonatomic, retain) MTLArgument *argument;
@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) int operation;
@property (nonatomic) int specifiedUsage;

- (int)addressSpace;
- (id)argument;
- (id)buffer;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)offset;
- (int)operation;
- (void)setAddressSpace:(int)arg1;
- (void)setArgument:(id)arg1;
- (void)setBuffer:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setOperation:(int)arg1;
- (void)setSpecifiedUsage:(int)arg1;
- (int)specifiedUsage;

@end
