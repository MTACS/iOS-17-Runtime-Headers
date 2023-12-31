
@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation {
    NSArray * _favorites;
}

@property (nonatomic, readonly) NSArray *favorites;

- (void).cxx_destruct;
- (id)favorites;
- (id)initWithCaller:(id)arg1;
- (void)prepareURLRequest:(id /* block */)arg1;
- (void)processResponse;

@end
