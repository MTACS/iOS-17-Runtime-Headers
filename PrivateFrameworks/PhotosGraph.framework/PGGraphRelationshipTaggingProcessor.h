
@interface PGGraphRelationshipTaggingProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_insertTagNodesWithEdgesForPersonsTagsWithConfidence:(id)arg1 withChangeRequest:(id)arg2;
- (id)initWithGraphBuilder:(id)arg1;
- (void)processRelationshipTagsForPersonNodes:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
