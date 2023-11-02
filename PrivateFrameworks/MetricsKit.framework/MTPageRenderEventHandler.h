
@interface MTPageRenderEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTPageRenderEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didCreateMetricsData:(id)arg1;
- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)metricsDataWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;
- (id)metricsDataWithPerfMeasurement:(id)arg1;
- (id)xpSamplingPercentageUsers:(id)arg1;
- (id)xpSessionDuration:(id)arg1;

@end
