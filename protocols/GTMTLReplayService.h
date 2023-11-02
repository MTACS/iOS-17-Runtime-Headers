
@protocol GTMTLReplayService

@required

- (bool)cancel:(unsigned long long)arg1;
- (GTReplayRequestToken *)decode:(GTReplayRequestBatch *)arg1;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)display:(GTReplayerDisplayRequest *)arg1;
- (GTReplayRequestToken *)fetch:(GTReplayRequestBatch *)arg1;
- (bool)load:(NSURL *)arg1 error:(id*)arg2;
- (bool)pause:(unsigned long long)arg1;
- (GTReplayRequestToken *)profile:(GTReplayProfileRequest *)arg1;
- (GTReplayRequestToken *)query:(GTReplayRequestBatch *)arg1;
- (GTReplayRequestToken *)raytrace:(GTReplayRaytraceRequest *)arg1;
- (unsigned long long)registerObserver:(id <GTMTLReplayServiceObserver>)arg1;
- (bool)resume:(unsigned long long)arg1;
- (GTReplayRequestToken *)shaderdebug:(GTReplayShaderDebugRequest *)arg1;
- (void)terminateProcess;
- (GTReplayRequestToken *)update:(GTReplayRequestBatch *)arg1;

@end
