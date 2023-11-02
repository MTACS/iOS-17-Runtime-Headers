
@interface WLKSportsFavoriteRequestOperation : WLKUTSNetworkRequestOperation {
    unsigned long long  _action;
    NSString * _caller;
    NSArray * _ids;
    WLKSportsFavoriteResponse * _response;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSString *caller;
@property (nonatomic, readonly, copy) NSArray *ids;
@property (nonatomic, retain) WLKSportsFavoriteResponse *response;

- (void).cxx_destruct;
- (id)_preparePOSTQueryOnlyWithRequest:(id)arg1;
- (unsigned long long)action;
- (id)caller;
- (id)ids;
- (id)initWithAction:(unsigned long long)arg1 ids:(id)arg2;
- (id)initWithAction:(unsigned long long)arg1 ids:(id)arg2 caller:(id)arg3;
- (void)prepareURLRequest:(id /* block */)arg1;
- (void)processResponse;
- (id)response;
- (void)setResponse:(id)arg1;

@end
