
@interface PXStoryPhotoAnalysisComposabilityScorer : NSObject <PXStoryAutoEditComposabilityScorer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)computeComposabilityScoresForDisplayAssets:(id)arg1 error:(id*)arg2;

@end
