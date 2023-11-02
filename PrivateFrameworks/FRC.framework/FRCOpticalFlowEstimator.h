
@interface FRCOpticalFlowEstimator : NSObject {
    unsigned long long  _height;
    long long  _inputRotation;
    NSObject<OS_os_log> * _logger;
    OpticalFlow * _opticalFlow;
    FRCImageProcessor * _processor;
    bool  _resourcePreAllocated;
    long long  _usage;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long flowHeight;
@property (nonatomic, readonly) unsigned long long flowWidth;

- (void).cxx_destruct;
- (void)allocateResources;
- (void)dealloc;
- (unsigned long long)flowHeight;
- (unsigned long long)flowWidth;
- (id)initWithUsage:(long long)arg1;
- (struct __CVBuffer { }*)opticalFlowFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2;
- (long long)opticalFlowFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3;
- (id)opticalFlowsFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2;
- (long long)opticalFlowsFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4;
- (void)releaseResources;

@end
