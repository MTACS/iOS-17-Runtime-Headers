
@interface PGGraphIngestPointsOfInterestProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder * _graphBuilder;
    NSDictionary * _momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
    NSDictionary * _momentNodesToResolvePOIByRegion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
@property (nonatomic, readonly) NSDictionary *momentNodesToResolvePOIByRegion;
@property (readonly) Class superclass;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)_collectPOIsToResolveWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(id /* block */)arg3;
- (bool)_fetchPointsOfInterestForRegions:(id)arg1 loggingConnection:(id)arg2 progress:(id /* block */)arg3;
- (void)_insertPointOfInterestTypeStrings:(id)arg1 graph:(id)arg2 withMomentNodes:(id)arg3 loggingConnection:(id)arg4;
- (id)_pointOfInterestTypeStringsFromBusinessItems:(id)arg1 withOriginalCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (void)deletePOIEdgesWithMomentNodes:(id)arg1 inGraph:(id)arg2;
- (void)disambiguatePointsOfInterestWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(id /* block */)arg3;
- (id)initWithGraphBuilder:(id)arg1;
- (id)momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
- (id)momentNodesToResolvePOIByRegion;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
