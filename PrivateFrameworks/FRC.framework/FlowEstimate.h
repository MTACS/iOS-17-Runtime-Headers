
@interface FlowEstimate : EspressoModel {
    unsigned long long  _channels;
    const char * _concatenatedInputBlob;
    NSString * _espresso_base_name;
    unsigned long long  _height;
    const char ** _inputBlobs;
    unsigned int  _level;
    const char ** _outputBlobs;
    NSObject<OS_dispatch_queue> * _submissionQueue;
    unsigned long long  _width;
}

@property unsigned long long channels;
@property unsigned long long height;
@property unsigned int level;
@property unsigned long long width;

+ (long long)numLevels;
+ (void)setNumLevels:(long long)arg1;

- (void).cxx_destruct;
- (bool)bindCVPixelBuffers:(struct __CVBuffer { }*)arg1 correlation:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3 output:(struct __CVBuffer { }*)arg4;
- (unsigned long long)channels;
- (bool)estimateFlow:(struct __CVBuffer { }*)arg1 correlation:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3 output:(struct __CVBuffer { }*)arg4 callback:(id /* block */)arg5;
- (unsigned long long)height;
- (id)initWithMode:(long long)arg1 level:(unsigned int)arg2;
- (unsigned int)level;
- (void)setChannels:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setupNetworkModel;
- (unsigned long long)width;

@end
