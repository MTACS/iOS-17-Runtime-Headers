
@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGPublicEventDisambiguator * _disambiguator;
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)_enumeratePublicEventsFromMomentNodes:(id)arg1 progressBlock:(id /* block */)arg2 usingBlock:(id /* block */)arg3;
- (void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)deletePerformerNodeWithNoEdgesInGraph:(id)arg1;
- (void)deletePublicEventCategoryWithNoEdgesInGraph:(id)arg1;
- (void)deletePublicEventEdgesWithMomentNodes:(id)arg1 inGraph:(id)arg2;
- (void)deletePublicEventNodesWithNoInEdgesInGraph:(id)arg1;
- (id)initWithGraphBuilder:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
