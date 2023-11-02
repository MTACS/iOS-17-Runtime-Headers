
@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder * _graphBuilder;
    bool  _petPrintClusteringEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredMomentUpdateTypes;
+ (id)supportedPetDetectionTypes;

- (void).cxx_destruct;
- (void)_deleteAllPetNodesInGraph:(id)arg1;
- (void)_deletePetNodesWithLocalIdentifiers:(id)arg1 inGraph:(id)arg2;
- (id)_fetchAllVerifiedPetsInPhotosLibrary:(id)arg1;
- (id)_fetchVerifiedPetsWithLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2;
- (unsigned long long)_speciesForDetectionType:(short)arg1;
- (id)initForTestingWithGraphBuilder:(id)arg1;
- (id)initWithGraphBuilder:(id)arg1;
- (id)momentNodesForPerson:(id)arg1 inPhotoLibrary:(id)arg2 withGraph:(id)arg3;
- (void)runLegacyPetIngestWithProgressBlock:(id /* block */)arg1;
- (void)runPetIngestWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
