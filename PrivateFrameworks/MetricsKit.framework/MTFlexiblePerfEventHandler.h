
@interface MTFlexiblePerfEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTFlexiblePerfEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)knownFields;
- (id)metricsDataWithEventType:(id)arg1 eventData:(id)arg2;
- (id)metricsDataWithPerfMeasurement:(id)arg1;
- (bool)mtIncludeBaseFields;
- (id)xpSamplingPercentage:(id)arg1;

@end
