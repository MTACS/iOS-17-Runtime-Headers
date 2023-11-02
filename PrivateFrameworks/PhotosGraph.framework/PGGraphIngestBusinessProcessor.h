
@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_spatialMapCategoriesByMeaningIdentifier;
+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg1 requiredCriteriaByPOIIdentifier:(id)arg2 meaningfulEventProcessorCache:(id)arg3;
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg1 graph:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)_insertBusinessItemsFromMomentNodes:(id)arg1 graph:(id)arg2 withLocationOfInterestVisitsToResolveByMomentUUID:(id)arg3 requiredCriteriaByPOIIdentifier:(id)arg4 progressBlock:(id /* block */)arg5;
- (bool)_momentNode:(id)arg1 hasValidConstraintsForLocationOfInterestVisit:(id)arg2 requiredCriteriaByPOIIdentifier:(id)arg3 meaningfulEventProcessorCache:(id)arg4;
- (id)_predominantVisitForMomentNode:(id)arg1 publicEventBusinessItemMuid:(unsigned long long)arg2;
- (void)deleteBusinessCategoryNodesWithNoEdges:(id)arg1;
- (void)deleteBusinessEdgesWithMomentNodes:(id)arg1 inGraph:(id)arg2;
- (void)deleteBusinessNodesWithNoInEdgesInGraph:(id)arg1;
- (id)initWithGraphBuilder:(id)arg1;
- (id)requiredCriteriaByPOIIdentifierForGraph:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
