
@interface WLKCanonicalPlayablesRequest : WLKRequest {
    NSString * _canonicalID;
    NSString * _statsID;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSString *statsID;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)initWithCanonicalID:(id)arg1;
- (id)initWithStatsID:(id)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1 canonicalType:(long long)arg2;
- (id)statsID;

@end
