
@interface CMITiledInferenceProcessorInstanceExecutor : NSObject {
    bool  _active;
    <MTLCommandQueue> * _commandQueue;
    id /* block */  _completionHandler;
    CMITiledInferenceProcessorConfig * _config;
    <CMIInferenceDevice> * _inferenceDevice;
    <CMIInferenceExecutionStream> * _inferenceStream;
    unsigned long long  _instanceIndex;
    <CMIInferenceNetworkInstance> * _networkInstanceToWaitOn;
    bool  _preStep;
    unsigned long long  _stageIndex;
    CMITiledInferenceProcessorTileInfoImpl * _tileInfo;
}

- (void).cxx_destruct;
- (id)initWithIndex:(void *)arg1 inferenceDevice:(void *)arg2 commandQueue:(void *)arg3 config:(void *)arg4 tileCount:(void *)arg5; // needs 5 arg types, found 4: unsigned long long, id, id, id
- (bool)isActive;
- (int)scheduleWaitsWithCommandBuffer:(id)arg1;
- (int)scheduleWorkWithCommandBuffer:(id)arg1;
- (int)startTileWithIndex:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 1: id /* block */

@end
