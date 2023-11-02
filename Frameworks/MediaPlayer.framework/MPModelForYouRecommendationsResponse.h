
@interface MPModelForYouRecommendationsResponse : MPModelResponse

@property (nonatomic, readonly) NSArray *nms_cachedRecommendationsArray;
@property (nonatomic, readonly) NSDictionary *nms_cachedStoreItemMetadataResults;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (id)nms_cachedRecommendationsArray;
- (id)nms_cachedStoreItemMetadataResults;
- (void)nms_setCachedRecommendationsArray:(id)arg1;
- (void)nms_setCachedStoreItemMetadataResults:(id)arg1;

@end
