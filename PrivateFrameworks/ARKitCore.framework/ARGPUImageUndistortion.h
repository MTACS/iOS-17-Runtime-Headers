
@interface ARGPUImageUndistortion : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _fisheyeIntrinsics;
    void _fisheyeRadialCoefficients;
    <MTLTexture> * _lut;
    <MTLComputePipelineState> * _lutGenerationPipelineState;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rectilinearIntrinsics;
    <MTLComputePipelineState> * _rgbPipelineState;
    <MTLComputePipelineState> * _yuvPipelineState;
}

- (void).cxx_destruct;
- (id)init;
- (void)undistortFisheyeImage:(void *)arg1 withFisheyeIntrinsics:(void *)arg2 withFisheyeRadialCoefficients:(void *)arg3 toRectilinearImage:(void *)arg4 withRectilinearIntrinsics:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct __CVBuffer {}**, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }
- (bool)undistortFisheyeTexture:(void *)arg1 withFisheyeIntrinsics:(void *)arg2 withFisheyeRadialCoefficients:(void *)arg3 toRectilinearImage:(void *)arg4 withRectilinearIntrinsics:(void *)arg5; // needs 5 arg types, found 4: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }

@end
