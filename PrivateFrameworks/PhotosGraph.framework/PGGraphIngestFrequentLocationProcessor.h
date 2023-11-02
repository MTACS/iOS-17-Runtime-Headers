
@interface PGGraphIngestFrequentLocationProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder * _graphBuilder;
    NSObject<OS_os_log> * _loggingConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)deleteFrequentLocationNodesInGraph:(id)arg1 changeRequest:(id)arg2;
- (id)initWithGraphBuilder:(id)arg1;
- (void)processAndInsertFrequentLocationWithMomentNodes:(id)arg1 inGraph:(id)arg2 changeRequest:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)processFrequentLocationWithGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
