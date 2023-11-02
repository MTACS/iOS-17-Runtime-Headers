
@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType> {
    <FCContentContext> * _context;
    <FCFlintHelper> * _flintHelper;
}

@property (nonatomic, readonly) <FCContentContext> *context;
@property (nonatomic, readonly) <FCFlintHelper> *flintHelper;

- (void).cxx_destruct;
- (id)context;
- (id)downloadArticleWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchCachedArticleWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)flintHelper;
- (id)init;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2;
- (bool)isArticleDownloadedEnoughToRead:(id)arg1;

@end
