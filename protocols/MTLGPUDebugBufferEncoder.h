
@protocol MTLGPUDebugBufferEncoder

@required

- (<MTLBuffer> *)encodeBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 resultOffset:(unsigned long long*)arg4;

@end
