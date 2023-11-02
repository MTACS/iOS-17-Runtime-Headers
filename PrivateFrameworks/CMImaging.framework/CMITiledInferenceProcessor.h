
@interface CMITiledInferenceProcessor : NSObject {
    <MTLCommandQueue> * _commandQueue;
    CMITiledInferenceProcessorConfig * _config;
    <MTLDevice> * _device;
    <CMIInferenceDevice> * _inferenceDevice;
}

- (void).cxx_destruct;
- (int)_createInferenceDeviceWithConfig:(id)arg1;
- (int)allocateIOBuffers;
- (id)initWithCommandQueue:(id)arg1;
- (id)initWithMetalContext:(id)arg1;
- (int)loadWithConfig:(id)arg1;
- (int)runWithTileCount;
- (int)runWithTileCount:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 1: id /* block */

@end
