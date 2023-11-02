
@protocol MTLGPUDebugCommandEncoder <NSObject>

@required

- (unsigned int)encoderID;
- (MTLGPUDebugBuffer *)temporaryBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (MTLGPUDebugBuffer *)temporaryBufferWithLength:(unsigned long long)arg1;

@end
