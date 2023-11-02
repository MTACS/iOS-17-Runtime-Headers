
@interface PXStoryAutoEditClipComposabilityProvider : NSObject {
    <PXStoryChapterCollection> * _chapterCollection;
    <PXStoryComposabilityResults> * _composabilityResults;
    <PXStoryAutoEditComposabilityScorer> * _cropQualityScorer;
    <PXStoryComposabilityResults> * _cropScoreResults;
    <PXDisplayAssetFetchResult> * _displayAssets;
    NSError * _error;
    NSObject<OS_os_log> * _log;
    <PXStoryComposabilityResults> * _similarityScoreResults;
    <PXStoryAutoEditComposabilityScorer> * _similarityScorer;
}

@property (nonatomic, readonly) <PXStoryChapterCollection> *chapterCollection;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) <PXStoryAutoEditComposabilityScorer> *cropQualityScorer;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssets;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) <PXStoryAutoEditComposabilityScorer> *similarityScorer;

- (void).cxx_destruct;
- (void)_computeComposabilityScores;
- (id)chapterCollection;
- (struct { float x1; float x2; })composabilityScoresForDisplayAssetIndex:(unsigned long long)arg1;
- (long long)count;
- (id)cropQualityScorer;
- (id)diagnosticDescription;
- (id)displayAssets;
- (id)error;
- (id)initWithDisplayAssets:(id)arg1 chapterCollection:(id)arg2;
- (id)results;
- (void)setSimilarityScorer:(id)arg1;
- (id)similarityScorer;

@end
