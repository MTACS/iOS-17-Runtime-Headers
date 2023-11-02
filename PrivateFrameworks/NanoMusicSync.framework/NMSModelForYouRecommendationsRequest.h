
@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest {
    NSArray * _nms_cachedRecommendationsArray;
    NSDictionary * _nms_cachedStoreItemMetadataResults;
    bool  _nms_useCachedDataOnly;
}

@property (nonatomic, retain) NSArray *nms_cachedRecommendationsArray;
@property (nonatomic, retain) NSDictionary *nms_cachedStoreItemMetadataResults;
@property (nonatomic) bool nms_useCachedDataOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)nms_cachedRecommendationsArray;
- (id)nms_cachedStoreItemMetadataResults;
- (bool)nms_useCachedDataOnly;
- (void)setNms_cachedRecommendationsArray:(id)arg1;
- (void)setNms_cachedStoreItemMetadataResults:(id)arg1;
- (void)setNms_useCachedDataOnly:(bool)arg1;

@end
