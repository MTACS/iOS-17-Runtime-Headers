
@interface TSDGPUDataArrayBuffer : NSObject <TSDGPUDataBufferAccessor> {
    NSMutableDictionary * _attributeOffsetsDictionary;
    unsigned long long  _bufferCount;
    unsigned long long  _bufferIndex;
    unsigned int  _bufferUsage;
    unsigned long long  _currentBufferIndex;
    unsigned long long  _dataBufferEntrySize;
    bool  _dataBufferHasBeenSetup;
    unsigned long long  _dataTypeSizeInBytes;
    char * _gLData;
    unsigned int * _gLDataBuffers;
    NSArray * _metalDataBuffers;
    long long * _needsUpdateFirstIndex;
    long long * _needsUpdateLastIndex;
    bool  _usesMetalBuffer;
    NSMutableArray * _vertexAttributes;
    unsigned long long  _vertexCount;
}

@property (nonatomic, readonly) unsigned long long bufferCount;
@property (nonatomic) unsigned long long currentBufferIndex;
@property (nonatomic, readonly) unsigned long long dataBufferEntrySize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUpdatedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAllIndexesNeedUpdate;
- (void)addIndexNeedsUpdate:(long long)arg1;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)bufferCount;
- (unsigned long long)currentBufferIndex;
- (unsigned long long)dataBufferEntrySize;
- (char *)dataPointer;
- (void)dealloc;
- (id)description;
- (void)enableArrayBufferWithDevice:(id)arg1;
- (void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2;
- (bool)hasUpdatedData;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;
- (float)metalFloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; })metalPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })metalPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })metalPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setCurrentBufferIndex:(unsigned long long)arg1;
- (void)setMetalFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)swapGPUDataBuffers;
- (unsigned long long)vertexCount;

@end
