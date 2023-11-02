
@interface FCArticle : NSObject {
    NSString * _articleID;
    FCArticleContent * _content;
    NSError * _fetchError;
    NSObject<OS_dispatch_group> * _fetchGroup;
    <FCHeadlineProviding> * _headline;
    FCFetchOperation * _headlineFetchOperation;
}

@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, retain) FCArticleContent *content;
@property (nonatomic, retain) NSError *fetchError;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic, retain) <FCHeadlineProviding> *headline;
@property (nonatomic, retain) FCFetchOperation *headlineFetchOperation;

- (void).cxx_destruct;
- (id)articleID;
- (id)content;
- (void)dealloc;
- (id)fetchError;
- (id)fetchGroup;
- (id)headline;
- (id)headlineFetchOperation;
- (id)init;
- (id)initWithContext:(id)arg1 articleID:(id)arg2 forceArticleUpdate:(bool)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (id)initWithContext:(id)arg1 headline:(id)arg2;
- (void)performBlockWhenContentIsLoaded:(id /* block */)arg1;
- (void)performBlockWhenFullyLoaded:(id /* block */)arg1;
- (void)setContent:(id)arg1;
- (void)setFetchError:(id)arg1;
- (void)setFetchGroup:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setHeadlineFetchOperation:(id)arg1;

@end
