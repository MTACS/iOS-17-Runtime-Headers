
@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation {
    WLKSiriBestPlayablesResponse * _response;
    NSArray * _statsIDs;
}

@property (nonatomic, readonly) WLKSiriBestPlayablesResponse *response;
@property (nonatomic, readonly, copy) NSArray *statsIDs;

- (void).cxx_destruct;
- (id)initWithStatsIDs:(id)arg1 caller:(id)arg2;
- (void)processResponse;
- (id)response;
- (id)statsIDs;

@end
