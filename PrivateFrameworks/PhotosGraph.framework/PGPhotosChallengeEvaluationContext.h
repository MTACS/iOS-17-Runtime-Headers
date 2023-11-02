
@interface PGPhotosChallengeEvaluationContext : NSObject {
    void graph;
    void photoLibrary;
    void sceneTaxonomy;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) CLSSceneTaxonomyHierarchy *sceneTaxonomy;

- (void).cxx_destruct;
- (id)graph;
- (id)init;
- (id)photoLibrary;
- (id)sceneTaxonomy;

@end
