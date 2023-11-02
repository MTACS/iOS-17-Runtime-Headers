
@protocol MTLIntersectionFunctionTable <MTLResource>

@required

- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFunction:(id <MTLFunctionHandle>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOpaqueCurveIntersectionFunctionWithSignature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setOpaqueCurveIntersectionFunctionWithSignature:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
