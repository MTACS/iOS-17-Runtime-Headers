
@interface MLPDeviceHandler : NSObject {
    <MTLCommandQueue> * _commandQueue;
    unsigned long long  _dataLayout;
    <MTLDevice> * _device;
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { 
        unsigned int __x_[624]; 
        unsigned long long __i_; 
    }  weightSeed;
}

@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly) unsigned long long dataLayout;
@property (readonly) <MTLDevice> *device;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)biasVectorWithLength:(unsigned long long)arg1 stdDev:(float)arg2 values:(const void*)arg3;
- (id)commandQueue;
- (unsigned long long)dataLayout;
- (id)deduceDevice;
- (id)device;
- (id)imageBatchFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 channels:(unsigned long long)arg6;
- (id)imageFromData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
- (id)imageFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 featureChannels:(unsigned long long)arg6;
- (void)importDataFromGPU:(id)arg1 cmdBuf:(id)arg2;
- (id)initWithDataLayout:(id)arg1;
- (id)matrixFromImages:(id)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3;
- (id)matrixToVector:(id)arg1;
- (id)matrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3;
- (void)sendDataToGPU:(id)arg1;
- (id)tempMatrixFromImages:(id)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3;
- (id)tempMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3;
- (float)uniformRandWithParamA:(float)arg1 paramB:(float)arg2;
- (id)vectorWithLength:(unsigned long long)arg1 cmdBuf:(id)arg2;
- (id)weightMatrixFixedRowBytesWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)weightMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 stdDev:(float)arg3 initialValues:(const void*)arg4 columnMajor:(bool)arg5;

@end
