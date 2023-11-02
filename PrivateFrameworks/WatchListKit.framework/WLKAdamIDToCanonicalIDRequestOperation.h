
@interface WLKAdamIDToCanonicalIDRequestOperation : WLKUTSNetworkRequestOperation {
    NSString * _adamId;
    WLKAdamIDToCanonicalIDResponse * _response;
}

@property (nonatomic, retain) NSString *adamId;
@property (nonatomic, retain) WLKAdamIDToCanonicalIDResponse *response;

- (void).cxx_destruct;
- (id)adamId;
- (id)initWithAdamId:(id)arg1;
- (void)processResponse;
- (id)response;
- (void)setAdamId:(id)arg1;
- (void)setResponse:(id)arg1;

@end
