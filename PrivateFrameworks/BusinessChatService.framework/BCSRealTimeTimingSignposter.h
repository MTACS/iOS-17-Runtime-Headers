
@interface BCSRealTimeTimingSignposter : BCSRealTimeShardSignposter <BCSRealTimeTimingMeasurementHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)timingMeasurementDidBegin:(id)arg1;
- (void)timingMeasurementDidEnd:(id)arg1;

@end
