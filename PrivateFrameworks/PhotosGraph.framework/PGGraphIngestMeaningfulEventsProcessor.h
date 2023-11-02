
@interface PGGraphIngestMeaningfulEventsProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_removeInvalidMeaningEdgesWithDomain:(unsigned short)arg1 momentNode:(id)arg2 validMeaningLabels:(id)arg3 legacyMeaningLabels:(id)arg4;
- (void)_updateMeaningsOfMomentNode:(id)arg1 graph:(id)arg2 withValidMeaningLabels:(id)arg3 legacyLabels:(id)arg4;
- (id)initWithGraphBuilder:(id)arg1;
- (id)meaningfulEventMatchingResultsForMomentNode:(id)arg1 withRequiredMeaningfulEventCriteriaByIdentifier:(id)arg2 andMeaningfulEventProcessorCache:(id)arg3;
- (void)processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 requiredMeaningfulEventCriteriaByIdentifier:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)updateMeaningsOfMomentNode:(id)arg1 graph:(id)arg2 affectedMeaningLabels:(id)arg3 withMatchedResults:(id)arg4;

@end
