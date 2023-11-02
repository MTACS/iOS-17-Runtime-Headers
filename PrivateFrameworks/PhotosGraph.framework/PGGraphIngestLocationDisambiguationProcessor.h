
@interface PGGraphIngestLocationDisambiguationProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (id)initWithGraphBuilder:(id)arg1;
- (void)removeDuplicateCityNodes:(id)arg1 graph:(id)arg2 loggingConnection:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
