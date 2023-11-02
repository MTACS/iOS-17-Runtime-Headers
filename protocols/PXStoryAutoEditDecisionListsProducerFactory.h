
@protocol PXStoryAutoEditDecisionListsProducerFactory

@required

- (<PXStoryAutoEditDecisionListsProducer> *)autoEditDecisionListsProducerForAssetCollection:(id <PXDisplayAssetCollection>)arg1 displayAssets:(id <PXDisplayAssetFetchResult>)arg2 movieHighlights:(id <PXStoryMovieHighlightsCollection>)arg3 chapterCollection:(id <PXStoryChapterCollection>)arg4 targetOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg5;
- (<PXStoryAutoEditDecisionListsProducer> *)fallbackAutoEditDecisionListsProducer;

@end
