
@interface PLSearchIndexSceneTaxonomyProvider : NSObject {
    PLSearchIndexSceneTaxonomy * _latestSceneTaxonomy;
    PLSearchIndexSceneTaxonomy * _previousSceneTaxonomy;
}

@property (nonatomic, readonly) NSString *digests;
@property (nonatomic, retain) PLSearchIndexSceneTaxonomy *latestSceneTaxonomy;
@property (nonatomic, retain) PLSearchIndexSceneTaxonomy *previousSceneTaxonomy;

- (void).cxx_destruct;
- (id)description;
- (id)digests;
- (id)latestSceneTaxonomy;
- (id)previousSceneTaxonomy;
- (id)searchIndexSceneTaxonomyForSceneAnalysisVersion:(short)arg1;
- (void)setLatestSceneTaxonomy:(id)arg1;
- (void)setPreviousSceneTaxonomy:(id)arg1;

@end
