
@interface BWInferenceFusionTrackerMeanPixelCalculator : NSObject {
    <MTLCommandQueue> * _commandQueue;
    MPSImageStatisticsMean * _meanFilter;
    <MTLTexture> * _meanTexture;
}

- (void)asyncMeanPixelForBuffer:(struct __CVBuffer { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithCommandQueue:(id)arg1;

@end
