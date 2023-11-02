
@interface MetalPixelBufferUtility : NSObject {
    bool  _enabled;
    <MTLCommandQueue> * _metalCommandQueue;
    <MTLDevice> * _metalDevice;
    <MTLComputePipelineState> * _pipeLineStates;
}

@property (nonatomic) bool enabled;

+ (id)sharedMetalPixelBufferUtility;

- (void).cxx_destruct;
- (bool)enabled;
- (id)init;
- (bool)joinCompandedWarholBuffer:(struct __CVBuffer { }*)arg1 intoCompandedBayerBuffer:(struct __CVBuffer { }*)arg2;
- (bool)joinWarholBuffer:(struct __CVBuffer { }*)arg1 intoBayerBuffer:(struct __CVBuffer { }*)arg2 shiftBitsRightBy:(int)arg3 msbReplication:(bool)arg4;
- (bool)joinYUVBuffer:(struct __CVBuffer { }*)arg1 intoRawBayerPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3 msbReplication:(bool)arg4;
- (bool)processBayerBuffer:(struct __CVBuffer { }*)arg1 withWarholBuffer:(struct __CVBuffer { }*)arg2 shiftCount:(int)arg3 msbReplication:(bool)arg4 operation:(int)arg5 sampleSize:(int)arg6;
- (void)setEnabled:(bool)arg1;
- (bool)splitBayerBuffer:(struct __CVBuffer { }*)arg1 intoWarholPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3;
- (bool)splitBayerBuffer:(struct __CVBuffer { }*)arg1 intoYUVPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3;
- (bool)splitCompandedBayerBuffer:(struct __CVBuffer { }*)arg1 intoCompandedWarholPixelBuffer:(struct __CVBuffer { }*)arg2;

@end
