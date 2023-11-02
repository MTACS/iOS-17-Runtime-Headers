
@interface MTRClusterBarrierControl : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (void)barrierControlGoToPercentWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)barrierControlGoToPercentWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)barrierControlStopWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)barrierControlStopWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)barrierControlStopWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)barrierControlStopWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeBarrierCapabilitiesWithParams:(id)arg1;
- (id)readAttributeBarrierCloseEventsWithParams:(id)arg1;
- (id)readAttributeBarrierClosePeriodWithParams:(id)arg1;
- (id)readAttributeBarrierCommandCloseEventsWithParams:(id)arg1;
- (id)readAttributeBarrierCommandOpenEventsWithParams:(id)arg1;
- (id)readAttributeBarrierMovingStateWithParams:(id)arg1;
- (id)readAttributeBarrierOpenEventsWithParams:(id)arg1;
- (id)readAttributeBarrierOpenPeriodWithParams:(id)arg1;
- (id)readAttributeBarrierPositionWithParams:(id)arg1;
- (id)readAttributeBarrierSafetyStatusWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (void)writeAttributeBarrierCloseEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBarrierCloseEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeBarrierClosePeriodWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBarrierClosePeriodWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeBarrierOpenEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBarrierOpenEventsWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeBarrierOpenPeriodWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBarrierOpenPeriodWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
