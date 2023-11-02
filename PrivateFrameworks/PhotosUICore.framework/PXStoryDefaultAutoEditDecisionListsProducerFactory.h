
@interface PXStoryDefaultAutoEditDecisionListsProducerFactory : NSObject <PXStoryAutoEditDecisionListsProducerFactory> {
    PFStoryAutoEditConfiguration * _configuration;
    PXStoryConfiguration * _storyConfiguration;
}

@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;

- (void).cxx_destruct;
- (id)autoEditDecisionListsProducerForAssetCollection:(id)arg1 displayAssets:(id)arg2 movieHighlights:(id)arg3 chapterCollection:(id)arg4 targetOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg5;
- (id)fallbackAutoEditDecisionListsProducer;
- (id)initWithStoryConfiguration:(id)arg1;
- (id)storyConfiguration;

@end
