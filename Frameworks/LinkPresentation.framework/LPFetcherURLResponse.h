
@interface LPFetcherURLResponse : LPFetcherResponse {
    NSURL * _URL;
}

@property (nonatomic, readonly, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)arg1 fetcher:(id)arg2;

@end
