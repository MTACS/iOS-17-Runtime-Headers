
@interface SKUILoadTrendingSearchPageOperation : NSOperation {
    SKUIClientContext * _clientContext;
    id /* block */  _outputBlock;
    NSURL * _pageURL;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly, copy) id /* block */ outputBlock;
@property (nonatomic, readonly) NSURL *pageURL;

- (void).cxx_destruct;
- (id)clientContext;
- (id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(id /* block */)arg3;
- (void)main;
- (id /* block */)outputBlock;
- (id)pageURL;

@end
