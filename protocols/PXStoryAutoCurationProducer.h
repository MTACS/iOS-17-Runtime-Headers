
@protocol PXStoryAutoCurationProducer

@required

- (NSProgress *)requestCuratedAssetsWithOptions:(void *)arg1 targetOverallDurationInfo:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXStoryProducerResult *, void*
- (NSProgress *)requestCurationLengthsWithOptions:(void *)arg1 allAssets:(void *)arg2 curatedAssets:(void *)arg3 resultHandler:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, <PXDisplayAssetFetchResult> *, <PXDisplayAssetFetchResult> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXStoryProducerResult *, void*

@end
