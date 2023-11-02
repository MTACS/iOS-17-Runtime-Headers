
@interface MLPNetwork : NSObject {
    unsigned long long  _batchSize;
    bool  _computeLossOnInference;
    MLPDeviceHandler * _deviceHandler;
    MPSImageCopyToMatrix * _i2mKernel;
    unsigned long long  _inputChannels;
    unsigned long long  _inputHeight;
    unsigned long long  _inputLength;
    NSArray * _layers;
    unsigned long long  _lossBatchSize;
    MPSMatrixCopyToImage * _m2iKernel;
    unsigned long long  _networkType;
    MontrealNNModelOptimizerParam * _optimizerParams;
    NSDictionary * _options;
}

@property unsigned long long batchSize;
@property bool computeLossOnInference;
@property (retain) MLPDeviceHandler *deviceHandler;
@property (retain) MPSImageCopyToMatrix *i2mKernel;
@property unsigned long long inputChannels;
@property unsigned long long inputHeight;
@property unsigned long long inputLength;
@property (retain) NSArray *layers;
@property unsigned long long lossBatchSize;
@property (retain) MPSMatrixCopyToImage *m2iKernel;
@property unsigned long long networkType;
@property (retain) MontrealNNModelOptimizerParam *optimizerParams;
@property (retain) NSDictionary *options;

+ (id)networkWithLayers:(id)arg1 inputLength:(unsigned long long)arg2 inputHeight:(unsigned long long)arg3 inputChannels:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 lossBatchSize:(unsigned long long)arg6 options:(id)arg7 deviceHandler:(id)arg8 optimizerParams:(id)arg9;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)computeInference:(id)arg1;
- (bool)computeLossOnInference;
- (void)createLayerKernels;
- (id)deviceHandler;
- (void*)generateModelContainer;
- (id)i2mKernel;
- (id)initWithLayers:(id)arg1;
- (id)initWithNetworkType:(unsigned long long)arg1 layers:(id)arg2;
- (unsigned long long)inputChannels;
- (unsigned long long)inputHeight;
- (unsigned long long)inputLength;
- (id)layers;
- (unsigned long long)lossBatchSize;
- (id)m2iKernel;
- (unsigned long long)networkType;
- (id)optimizerParams;
- (id)options;
- (unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4;
- (void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(id /* block */)arg4 semaphore:(id)arg5;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setComputeLossOnInference:(bool)arg1;
- (void)setDeviceHandler:(id)arg1;
- (void)setI2mKernel:(id)arg1;
- (void)setInputChannels:(unsigned long long)arg1;
- (void)setInputHeight:(unsigned long long)arg1;
- (void)setInputLength:(unsigned long long)arg1;
- (void)setLayers:(id)arg1;
- (void)setLossBatchSize:(unsigned long long)arg1;
- (void)setM2iKernel:(id)arg1;
- (void)setNetworkType:(unsigned long long)arg1;
- (void)setOptimizerParams:(id)arg1;
- (void)setOptions:(id)arg1;

@end
