
@interface SXRelatedWebViewCache : NSObject {
    NSMapTable * _cache;
}

@property (nonatomic, readonly) NSMapTable *cache;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)relatedWebViewForBaseURL:(id)arg1;
- (void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2;

@end
