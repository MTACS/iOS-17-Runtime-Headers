
@interface PGExternalAssetProcessor : NSObject {
    PHPhotoLibrary * _photoLibrary;
    PGManagerWorkingContext * _workingContext;
}

- (void).cxx_destruct;
- (id)initWithWorkingContext:(id)arg1;
- (bool)processExternalAssetRelevanceInferenceWithError:(id*)arg1 progressReporter:(id)arg2;
- (bool)processExternalAssetRelevanceInferenceWithError:(id*)arg1 progressReporter:(id)arg2 shareBackSuggester:(id)arg3;

@end
