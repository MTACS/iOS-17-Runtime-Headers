
@interface PGGraphIngestPrefetchLocationProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithGraphBuilder:(id)arg1;
- (bool)prefetchLocationsWithRegions:(id)arg1 loggingConnection:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)regionsWithMoments:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
