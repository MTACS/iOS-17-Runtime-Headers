
@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {
    bool  _isApricotDevice;
    NSString * _processName;
    <PREExperimentResolverProtocol> * _resolver;
    PETEventTracker2 * _tracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_responseListFromGeneratedEvent:(id)arg1;
- (id)init;
- (id)initWithExperimentResolver:(id)arg1;
- (id)initWithTracker:(id)arg1 experimentResolver:(id)arg2;
- (bool)isApricotDevice;
- (void)registerResponseTapped:(id)arg1;
- (void)registerResponseViewed:(id)arg1;
- (void)registerResponsesGenerated:(id)arg1;
- (id)tracker;

@end
