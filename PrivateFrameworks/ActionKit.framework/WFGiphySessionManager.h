
@interface WFGiphySessionManager : NSObject <NSURLSessionDataDelegate> {
    NSString * _apiKey;
    NSURL * _baseURL;
    NSURLSession * _session;
}

@property (nonatomic, copy) NSString *apiKey;
@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)apiKey;
- (id)baseURL;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)random:(id /* block */)arg1;
- (void)search:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)sendRequestWithPath:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (id)session;
- (void)setApiKey:(id)arg1;
- (void)trendingWithLimit:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
