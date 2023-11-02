
@interface SASelfLogger : NSObject

- (id)collectVMCPUStatsWithStage:(long long)arg1 requestId:(id)arg2;
- (void)emitMWTCheckPointWithMwtCheckpoint:(long long)arg1 requestId:(id)arg2;
- (void)emitMWTCheckPointWithMwtCheckpoint:(long long)arg1 requestId:(id)arg2 timeStamp:(unsigned long long)arg3;
- (void)emitMWTMusicMetadata:(id)arg1 requestId:(id)arg2;
- (void)emitVMCPUStatsWithStage:(long long)arg1 requestId:(id)arg2;
- (void)emitVMCPUStatsWithVmCpuStatsData:(id)arg1;
- (id)getSiriRequestUUIDFor:(id)arg1;
- (id)init;

@end
