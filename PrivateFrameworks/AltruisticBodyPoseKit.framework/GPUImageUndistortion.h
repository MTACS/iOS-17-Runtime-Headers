
@interface GPUImageUndistortion : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _fisheyeIntrinsics;
    void _fisheyeRadialCoefficients;
    <MTLLibrary> * _library;
    <MTLTexture> * _lut;
    <MTLComputePipelineState> * _lutGenerationPipelineState;
    <MTLComputePipelineState> * _pipelineState;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rectilinearIntrinsics;
}

- (void).cxx_destruct;
- (id)init;
- (void)undistortFisheyeImage:(void *)arg1 withFisheyeIntrinsics:(void *)arg2 withFisheyeRadialCoefficients:(void *)arg3 toRectilinearImage:(void *)arg4 withRectilinearIntrinsics:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct __CVBuffer {}**, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }

@end
