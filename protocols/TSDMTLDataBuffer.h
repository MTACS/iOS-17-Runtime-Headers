
@protocol TSDMTLDataBuffer <NSObject, TSDGPUDataBufferSharedAccessors, TSDGPUDataBufferAccessor>

@required

+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexAttributes:(NSArray *)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2 device:(id <MTLDevice>)arg3;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexAttributes:(NSArray *)arg1 quadParticleCount:(unsigned long long)arg2 device:(id <MTLDevice>)arg3;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id <MTLDevice>)arg4;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 device:(id <MTLDevice>)arg3;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 device:(id <MTLDevice>)arg4;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 device:(id <MTLDevice>)arg5;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5 addTransparentBorder:(bool)arg6 device:(id <MTLDevice>)arg7;
+ (<TSDMTLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3 device:(id <MTLDevice>)arg4;

- (unsigned long long)centerAttributeIndex;
- (void)disableWithDevice:(id <MTLDevice>)arg1;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(bool)arg3;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 advanceDynamicBuffer:(bool)arg4;
- (void)enableDataBuffer;
- (void)encodeWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5 addTransparentBorder:(bool)arg6;
- (unsigned long long)metalDrawMode;
- (unsigned long long)positionAttributeIndex;
- (void)setDataForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(TSDGPUDataBufferAttribute *)arg3 dataBuffer:(id <TSDMTLDataBuffer>)arg4 index:(unsigned long long)arg5;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (void)setMetalDrawMode:(unsigned long long)arg1;
- (unsigned long long)texCoordAttributeIndex;
- (void)updateDataBufferAttributes:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { long long x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*, unsigned long long, void*
- (void)updateDataBufferAttributesWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { long long x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*, unsigned long long, void*
- (void)updateMetalDataBufferAttributes:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { long long x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*, unsigned long long, void*
- (TSDGPUDataBufferAttribute *)vertexAttributeNamed:(NSString *)arg1;

@end
