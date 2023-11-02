
@interface _MTLIndirectArgumentEncoder : _MTLObjectWithLabel <MTLArgumentEncoder> {
    <MTLDevice> * _device;
    _MTLIndirectArgumentBufferLayout * _layout;
}

@property (readonly) unsigned long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (nonatomic, readonly) _MTLIndirectArgumentBufferLayout *layout;
@property (readonly) Class superclass;

- (void*)constantDataAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)device;
- (id)initWithLayout:(id)arg1 device:(id)arg2;
- (id)layout;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setAccelerationStructure:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIndirectCommandBuffers:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setIntersectionFunctionTables:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
