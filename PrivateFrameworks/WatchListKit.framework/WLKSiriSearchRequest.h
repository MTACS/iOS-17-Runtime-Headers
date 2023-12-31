
@interface WLKSiriSearchRequest : WLKRequest {
    NSDictionary * _query;
}

@property (nonatomic, readonly, copy) NSDictionary *query;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)query;

@end
