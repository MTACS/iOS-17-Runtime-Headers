
@interface PGShareBackSceneprintSource : PGShareBackSource {
    NSCache * _assetsInMomentCache;
    PHPhotoLibrary * _photoLibrary;
}

- (void).cxx_destruct;
- (id)getAssetsInMomentNode:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2;
- (bool)isSimilarSuggesterInput:(id)arg1 toMomentNode:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;
- (bool)prepareSourceWithGraph:(id)arg1;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;
- (id)validInputsForSource:(id)arg1 givenSuggesterResults:(id)arg2;

@end
