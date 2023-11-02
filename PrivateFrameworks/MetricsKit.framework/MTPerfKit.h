
@interface MTPerfKit : MTMetricsKitTemplate {
    MTSampling * _sampling;
}

- (void).cxx_destruct;
- (id)flexibleMeasurementWithEventType:(id)arg1;
- (id)flexibleMeasurementWithEventType:(id)arg1 eventData:(id)arg2;
- (id)initWithTopic:(id)arg1;
- (id)loadUrlMeasurement;
- (id)loadUrlMeasurementWithEventData:(id)arg1;
- (id)pageRenderMeasurementWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3;
- (id)pageRenderMeasurementWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;
- (id)sampling;

@end
