
@interface PGGraphIngestPersonBiologicalSexProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)sexForFaces:(id)arg1 personDescription:(id)arg2;

- (void).cxx_destruct;
- (unsigned short)_phBiologicalSexFromIngestBiologicalSex:(unsigned long long)arg1;
- (id)_sexDescriptionForBiologicalSex:(unsigned long long)arg1;
- (unsigned long long)_sexForPersonNode:(id)arg1 photoLibrary:(id)arg2;
- (void)_writeBiologicalSexByPerson:(id)arg1 toPhotoLibrary:(id)arg2;
- (id)initWithGraphBuilder:(id)arg1;
- (void)processPersonBiologicalSexForPersonNodes:(id)arg1 photoLibrary:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
