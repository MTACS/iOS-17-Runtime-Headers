
@protocol MPSExternalNDArrayBinary <MPSExternalPluginBase>

@optional

- (unsigned long long)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 encoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 primaryBuffer:(id <MTLBuffer>)arg5 primaryInfo:(const struct { unsigned long long x1; int x2[4]; int x3[4]; unsigned int x4; }*)arg6 secondaryBuffer:(id <MTLBuffer>)arg7 secondaryInfo:(const struct { unsigned long long x1; int x2[4]; int x3[4]; unsigned int x4; }*)arg8 destinationBuffer:(id <MTLBuffer>)arg9 destinationInfo:(const struct { unsigned long long x1; int x2[4]; int x3[4]; unsigned int x4; }*)arg10 padding:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg11 predicationBuffer:(id <MTLBuffer>)arg12 predicationOffset:(unsigned long long)arg13;
- (unsigned long long)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 encoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 primaryBuffer:(id <MTLBuffer>)arg5 primaryInfo:(const struct { unsigned long long x1; int x2[4]; int x3[4]; unsigned int x4; }*)arg6 secondaryBuffer:(id <MTLBuffer>)arg7 secondaryInfo:(const struct { unsigned long long x1; int x2[4]; int x3[4]; unsigned int x4; }*)arg8 destinationBuffer:(id <MTLBuffer>)arg9 destinationInfo:(const struct { unsigned long long x1; int x2[4]; int x3[4]; unsigned int x4; }*)arg10 predicationBuffer:(id <MTLBuffer>)arg11 predicationOffset:(unsigned long long)arg12;

@end
