
@protocol TSDGPUDataBufferAccessor <NSObject>

@required

- (float)metalFloatForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; })metalPoint2DForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })metalPoint3DForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })metalPoint4DForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalFloat:(float)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;

@end
