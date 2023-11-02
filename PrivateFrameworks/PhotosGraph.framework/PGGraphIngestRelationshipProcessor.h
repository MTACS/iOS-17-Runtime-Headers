
@interface PGGraphIngestRelationshipProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_personNodesToAnalyzeInGraph:(id)arg1;
- (id)initWithGraphBuilder:(id)arg1;
- (id)personNodesToAnalyzeInGraph:(id)arg1 forAppleInternal:(bool)arg2;
- (void)removeInferredRelationshipEdgesForPersonNodes:(id)arg1 inGraph:(id)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
