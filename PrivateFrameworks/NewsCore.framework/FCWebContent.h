
@interface FCWebContent : NSObject {
    NSString * _articleID;
    FCAssetHandle * _excerptAssetHandle;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, retain) FCAssetHandle *excerptAssetHandle;
@property (nonatomic, retain) NSURL *sourceURL;

- (void).cxx_destruct;
- (id)URL;
- (id)articleID;
- (id)baseURL;
- (id)excerptAssetHandle;
- (id)init;
- (id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 excerptAssetHandle:(id)arg3;
- (void)setArticleID:(id)arg1;
- (void)setExcerptAssetHandle:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
