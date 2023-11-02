
@interface WLKCanonicalPlayablesSiriRequestOperation : WLKUTSNetworkRequestOperation {
    WLKCanonicalPlayablesResponse * _response;
    NSString * _sportsEventID;
    NSString * _statsID;
}

@property (nonatomic, readonly) WLKCanonicalPlayablesResponse *response;
@property (nonatomic, readonly) NSString *sportsEventID;
@property (nonatomic, readonly) NSString *statsID;

- (void).cxx_destruct;
- (id)initWithSportsEventID:(id)arg1 caller:(id)arg2;
- (id)initWithStatsID:(id)arg1 caller:(id)arg2;
- (void)processResponse;
- (id)response;
- (id)sportsEventID;
- (id)statsID;

@end
