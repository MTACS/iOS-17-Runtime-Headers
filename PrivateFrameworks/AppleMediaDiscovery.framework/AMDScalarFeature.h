
@interface AMDScalarFeature : AMDFeature

- (void)copyDoubleValues:(int)arg1 toBuffer:(double*)arg2 withDefaultValue:(double)arg3 withMapOp:(id)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
- (void)copyFloat32Values:(int)arg1 toBuffer:(float*)arg2 withDefaultValue:(float)arg3 withMapOp:(id)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
- (void)copyInt32Values:(int)arg1 toBuffer:(int*)arg2 withDefaultValue:(int)arg3 withMapOp:(id)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
- (id)initWithValue:(id)arg1;
- (id)stringValue;

@end
