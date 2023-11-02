
@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
    PGGraphIngestPersonAgeCategoryProcessorHelper * _helper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updatePhotoLibrary:(id)arg1 withAgeCategoryByPersonLocalIdentifier:(id)arg2;
- (id)initWithGraphBuilder:(id)arg1;
- (void)processPersonAgeCategoryForPersonNodes:(id)arg1 photoLibrary:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
