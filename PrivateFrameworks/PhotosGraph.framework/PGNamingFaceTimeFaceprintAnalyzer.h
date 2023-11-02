
@interface PGNamingFaceTimeFaceprintAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyFaceByPersonLocalIdentifierForPersonNodes:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end
