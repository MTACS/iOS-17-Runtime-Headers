
@interface PGPhotosChallengeMeaningAlgorithmWrapper : NSObject {
    PGGraph * _graph;
    PHPhotoLibrary * _photoLibrary;
    CLSSceneTaxonomyHierarchy * _sceneTaxonomy;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)debugInformationForMeaningIdentifier:(id)arg1 assetUUID:(id)arg2;
- (id)graph;
- (id)initWithEvaluationContext:(id)arg1;
- (id)photoLibrary;
- (unsigned short)predictQuestionStateForMeaningIdentifier:(id)arg1 assetUUID:(id)arg2 params:(id)arg3;

@end
