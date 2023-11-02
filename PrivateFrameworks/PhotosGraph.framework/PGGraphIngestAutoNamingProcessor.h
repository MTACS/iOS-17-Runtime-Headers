
@interface PGGraphIngestAutoNamingProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_personNodesWithoutContactInGraph:(id)arg1;
+ (bool)hasMeNodeAndMeContactInGraph:(id)arg1;
+ (id)personNodesToNameInGraph:(id)arg1;

- (void).cxx_destruct;
- (id)initWithGraphBuilder:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
