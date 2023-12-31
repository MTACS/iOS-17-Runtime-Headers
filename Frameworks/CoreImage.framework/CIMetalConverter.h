
@interface CIMetalConverter : NSObject {
    <MTLFunction> * _convertToBuffer;
    <MTLFunction> * _convertToTexture;
    <MTLDevice> * _device;
}

- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationRowBytes:(unsigned long long)arg5 destinationSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg6;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationTexture:(id)arg4;
- (id)initWithDevice:(id)arg1 kernelName:(id)arg2;

@end
