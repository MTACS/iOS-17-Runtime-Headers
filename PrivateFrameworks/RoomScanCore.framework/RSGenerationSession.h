
@interface RSGenerationSession : NSObject {
    RSGenerationConfiguration * _configuration;
    RSOfflineFloorPlanGenerator * _fpGenerator;
    NSObject<OS_dispatch_semaphore> * _generationSemaphore;
    NSString * _logDir;
    RSOfflineInfoDumper * _offlineInfoDumper;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)generatePointListsWithFloorplan:(id)arg1;
- (void)generatePointListsWithFloorplan:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getDebugInfo;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)processMultiLevelWithMultiFloorPlan:(id)arg1 withKeyframes:(id)arg2;
- (void)processMultiLevelWithMultiFloorPlan:(id)arg1 withKeyframes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processMultiLevelWithMultiFloorPlan:(id)arg1 withKeyframes:(id)arg2 completionHandlerWithError:(id /* block */)arg3;
- (id)processWithKeyframes:(id)arg1 initialAsset:(id)arg2;
- (void)processWithKeyframes:(id)arg1 initialAsset:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processWithKeyframes:(id)arg1 initialAsset:(id)arg2 completionHandlerWithError:(id /* block */)arg3;
- (id)processWithKeyframes:(id)arg1 initialAsset:(id)arg2 error:(id*)arg3;
- (id)processWithMultiFloorPlan:(id)arg1;
- (void)processWithMultiFloorPlan:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processWithMultiFloorPlan:(id)arg1 completionHandlerWithError:(id /* block */)arg2;
- (id)processWithMultiFloorPlan:(id)arg1 error:(id*)arg2;
- (void)processWithMultiFloorPlanDict:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processWithMultiFloorPlanDict:(id)arg1 completionHandlerWithError:(id /* block */)arg2;
- (void)setupOfflineDumpWithLogDir:(id)arg1;
- (id)standardizeFloorPlan:(id)arg1;
- (void)updateLcnnParams:(id)arg1;

@end
