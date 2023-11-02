
@interface NMSModelEditorialRecommendationsRequest : MPModelStoreBrowseRequest {
    id  _nms_cachedLoadedOutput;
    bool  _nms_useCachedDataOnly;
}

@property (nonatomic, retain) id nms_cachedLoadedOutput;
@property (nonatomic) bool nms_useCachedDataOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)nms_cachedLoadedOutput;
- (bool)nms_useCachedDataOnly;
- (void)setNms_cachedLoadedOutput:(id)arg1;
- (void)setNms_useCachedDataOnly:(bool)arg1;

@end
