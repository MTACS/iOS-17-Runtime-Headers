
@interface FlowAdaptationDecoder : FlowEstimate {
    NSString * _espresso_file;
    NSObject<OS_dispatch_queue> * _submissionQueue;
}

- (void).cxx_destruct;
- (bool)bindCVPixelBuffers:(struct __CVBuffer { }*)arg1 correlation:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3 output:(struct __CVBuffer { }*)arg4;
- (bool)estimateFlow:(struct __CVBuffer { }*)arg1 correlation:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3 output:(struct __CVBuffer { }*)arg4 callback:(id /* block */)arg5;
- (id)initWithMode:(long long)arg1;
- (void)setupNetworkModel;

@end
