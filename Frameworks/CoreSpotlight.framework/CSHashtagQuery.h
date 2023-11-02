
@interface CSHashtagQuery : CSSearchQuery {
    id /* block */  _hashTagCompletionHandler;
    NSMutableSet * _hashtags;
}

@property (copy) id /* block */ hashTagCompletionHandler;

- (void).cxx_destruct;
- (void)handleCompletion:(id)arg1;
- (void)handleFoundAttributes:(id)arg1 values:(id)arg2 attributesHandler:(id /* block */)arg3;
- (id /* block */)hashTagCompletionHandler;
- (id)initWithQueryString:(id)arg1 bundleIDs:(id)arg2;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (void)setHashTagCompletionHandler:(id /* block */)arg1;

@end
