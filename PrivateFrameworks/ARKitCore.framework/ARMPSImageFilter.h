
@interface ARMPSImageFilter : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    MPSUnaryImageKernel * _kernel;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImageKernel:(id)arg1 device:(id)arg2;
- (struct __CVBuffer { }*)processPixelBuffer:(struct __CVBuffer { }*)arg1 format:(unsigned long long)arg2;

@end
