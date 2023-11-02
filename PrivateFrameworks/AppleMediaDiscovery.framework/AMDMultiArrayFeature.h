
@interface AMDMultiArrayFeature : AMDFeature

- (id)buildMultiArrayBufferFrom:(id)arg1 andCapacity:(unsigned long long)arg2 error:(id*)arg3;
- (double*)fillDoubleMultiArray:(double*)arg1 fromSource:(id)arg2 atDepth:(unsigned int)arg3 error:(id*)arg4;
- (float*)fillFloat32MultiArray:(float*)arg1 fromSource:(id)arg2 atDepth:(unsigned int)arg3 error:(id*)arg4;
- (int*)fillInt32MultiArray:(int*)arg1 fromSource:(id)arg2 atDepth:(unsigned int)arg3 error:(id*)arg4;
- (id)getMultiArray:(id*)arg1;
- (id)initWithValue:(id)arg1;

@end
