
@interface PGGraphIngestHomeWorkProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteEdgelessHomeWorkNodesInGraph:(id)arg1;
- (void)_deleteLocationEdgesOfPersonNodes:(id)arg1 inGraph:(id)arg2;
- (void)inferHomeWorkAddressesOfPersonNodes:(id)arg1 andCLSPersonByContactIdentifier:(id)arg2 inGraph:(id)arg3;
- (id)initWithGraphBuilder:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
