
@interface ADLKTExecutor : NSObject {
    <MTLCommandQueue> * _commandQueue;
    unsigned int  _currentFrameIndex;
    NSMutableArray * _derivitives;
    <MTLDevice> * _device;
    NSMutableArray * _features;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
    bool  _isFirstTime;
    ADLKTOpticalFlow * _lkt;
    NSMutableArray * _pyramids;
}

- (void).cxx_destruct;
- (struct __CVBuffer { }*)createPixelBufferForOpticalFlow;
- (long long)executeWithFrame:(struct __CVBuffer { }*)arg1 createOpticalFlowBuffer:(struct __CVBuffer {}**)arg2;
- (long long)executeWithFrame:(struct __CVBuffer { }*)arg1 intoOpticalFlowBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithDescriptor:(id)arg1 forLayout:(unsigned long long)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
