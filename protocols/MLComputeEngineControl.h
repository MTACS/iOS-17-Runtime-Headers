
@protocol MLComputeEngineControl <NSObject>

@required

- (void)allocateDeviceMemoryForTensor:(MLCTensor *)arg1;
- (void)broadcastTensor:(MLCTensor *)arg1;
- (void)broadcastTensor:(MLCTensor *)arg1 batchSize:(unsigned long long)arg2;
- (void)commitAndWaitForCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MLCTensor *, NSError *, double, void*
- (void)commitAndWaitForCompletion:(void *)arg1 enableProfiling:(void *)arg2 graphExecutionTime:(void *)arg3 graphResultTensor:(void *)arg4; // needs 4 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MLCTensor *, NSError *, double, void*, bool, NSData *, MLCTensor *
- (void)commitWithCompletionHandler:(void *)arg1 enableProfiling:(void *)arg2 graphExecutionTime:(void *)arg3 graphResultTensor:(void *)arg4; // needs 4 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MLCTensor *, NSError *, double, void*, bool, NSData *, MLCTensor *
- (void)commitWithProfiling:(bool)arg1 graphExecutionTime:(NSData *)arg2;
- (void)deallocateDeviceMemoryForTensor:(MLCTensor *)arg1;
- (unsigned long long)deviceMemorySizeForTensor:(MLCTensor *)arg1;
- (void)dispatchBroadcastTensor:(MLCTensor *)arg1;
- (void)dispatchBroadcastTensor:(MLCTensor *)arg1 batchSize:(unsigned long long)arg2;
- (void)dispatchReadTensor:(MLCTensor *)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3;
- (NSData *)getHostPointerIfUnifiedDeviceMemory:(MLCTensor *)arg1;
- (bool)needToAllocateDeviceMemoryForTensor:(MLCTensor *)arg1;
- (unsigned long long)numDevices;
- (NSData *)readTensor:(MLCTensor *)arg1;
- (NSData *)readTensor:(MLCTensor *)arg1 fromDeviceIndex:(unsigned long long)arg2;
- (NSData *)readTensor:(MLCTensor *)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (void)readTensor:(MLCTensor *)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4;
- (void)readTensor:(MLCTensor *)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(bool)arg5;
- (void)readTensor:(MLCTensor *)arg1 targetBuffer:(void*)arg2;
- (void)setDeviceMemoryForTensor:(MLCTensor *)arg1 data:(MLCTensorData *)arg2;
- (bool)shareDeviceMemoryWithResultTensor:(MLCTensor *)arg1 sourceTensor:(MLCTensor *)arg2;
- (void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)signalNextEvent;
- (bool)synchronizeTensor:(MLCTensor *)arg1;
- (bool)transferTensor:(MLCTensor *)arg1 fromDevice:(MLCDevice *)arg2;
- (bool)updateDeviceMemoryForTensor:(MLCTensor *)arg1;
- (void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)waitForOthers;

@optional

- (void)allocateDeviceHeapForGraph:(NSArray *)arg1 forInference:(bool)arg2;
- (void)allocateDeviceMemoryForTensor:(MLCTensor *)arg1 batchSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)needToAllocateDeviceMemoryForTensor:(MLCTensor *)arg1 batchSize:(unsigned long long)arg2;
- (bool)postProcessCompiledGraph:(MLCGraph *)arg1 compilerOptions:(unsigned long long)arg2;
- (void)selectDevicesWithBatchSize:(unsigned long long)arg1;
- (void)selectDevicesWithBatchSize:(unsigned long long)arg1 calledfromBindAndWrite:(bool)arg2;
- (bool)synchronizeTensorOnHost:(MLCTensor *)arg1;

@end
