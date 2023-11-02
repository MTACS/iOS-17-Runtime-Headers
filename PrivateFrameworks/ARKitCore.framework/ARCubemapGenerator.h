
@interface ARCubemapGenerator : NSObject {
    ARGPUCubemapConverter * _cubemapConverter;
    ARGPUCubemapHistogram * _cubemapHistogram;
    ARGPUCubemapProjector * _cubemapProjector;
    NSObject<OS_dispatch_queue> * _cubemapQueue;
    ARGPUWarper * _gpuWarper;
}

- (void).cxx_destruct;
- (void)cubemapWithTransform:(void *)arg1 extent:(void *)arg2 lastHistogram:(void *)arg3 fromMeshes:(void *)arg4 cameraImage:(void *)arg5 cameraTransform:(void *)arg6 cameraIntrinsics:(void *)arg7 cameraExposure:(void *)arg8 cameraExposureOffset:(void *)arg9 completionHandler:(void *)arg10; // needs 10 arg types, found 9: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct ARLabHistogram { float x1; float x2[4][8][8]; }, id, struct __CVBuffer { }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, float, id /* block */
- (id)init;

@end
