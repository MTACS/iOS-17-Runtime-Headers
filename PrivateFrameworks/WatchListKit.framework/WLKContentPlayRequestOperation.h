
@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation {
    NSString * _canonicalID;
    WLKContentPlayResponse * _response;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, retain) WLKContentPlayResponse *response;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)initWithCanonicalID:(id)arg1 caller:(id)arg2;
- (void)processResponse;
- (id)response;
- (void)setResponse:(id)arg1;

@end
