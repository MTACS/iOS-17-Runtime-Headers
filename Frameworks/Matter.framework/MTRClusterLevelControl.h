
@interface MTRClusterLevelControl : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)moveToClosestFrequencyWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)moveToClosestFrequencyWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)moveToLevelWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)moveToLevelWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)moveToLevelWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)moveToLevelWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)moveWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)moveWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)moveWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)moveWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCurrentFrequencyWithParams:(id)arg1;
- (id)readAttributeCurrentLevelWithParams:(id)arg1;
- (id)readAttributeDefaultMoveRateWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeMaxFrequencyWithParams:(id)arg1;
- (id)readAttributeMaxLevelWithParams:(id)arg1;
- (id)readAttributeMinFrequencyWithParams:(id)arg1;
- (id)readAttributeMinLevelWithParams:(id)arg1;
- (id)readAttributeOffTransitionTimeWithParams:(id)arg1;
- (id)readAttributeOnLevelWithParams:(id)arg1;
- (id)readAttributeOnOffTransitionTimeWithParams:(id)arg1;
- (id)readAttributeOnTransitionTimeWithParams:(id)arg1;
- (id)readAttributeOptionsWithParams:(id)arg1;
- (id)readAttributeRemainingTimeWithParams:(id)arg1;
- (id)readAttributeStartUpCurrentLevelWithParams:(id)arg1;
- (void)stepWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)stepWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stepWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)stepWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stopWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)stopWithOnOffWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stopWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)stopWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeAttributeDefaultMoveRateWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeDefaultMoveRateWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOffTransitionTimeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOffTransitionTimeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOnLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOnLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOnTransitionTimeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOnTransitionTimeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOptionsWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOptionsWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
