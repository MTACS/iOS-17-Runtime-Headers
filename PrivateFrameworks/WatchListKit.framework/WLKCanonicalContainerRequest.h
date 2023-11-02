
@interface WLKCanonicalContainerRequest : WLKRequest {
    NSString * _canonicalID;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)initWithCanonicalID:(id)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1 canonicalType:(long long)arg2;

@end
